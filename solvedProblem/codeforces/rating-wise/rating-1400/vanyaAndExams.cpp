#include<vector>
#include<iostream>
#include<map>
#include<cmath>
#include<algorithm>
#include<stack>
#include<set>
#include<unordered_set>
#include<string>
using namespace std;

typedef vector<int>vi;
typedef vector<string>vs;
typedef map<int,vector<int> >mivi;
typedef pair<int,bool>pib;
typedef pair<int,int>pii;
typedef vector<pair<int,int> >vpii;

bool cmp(pii A,pii B) {
    if(A.second == B.second) {
        return A.first < B.first;
    }

    return A.second < B.second;
}

long long getTotal(vpii examGrades) {
    long long int total = 0;
    for(const auto &e : examGrades) {
        total += e.first;
    }
    return total;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int exams,maxGrade,requiredAvg;
    cin >> exams >> maxGrade >> requiredAvg;
    vpii examGrades(exams);
    for(auto &d : examGrades) {
        cin >> d.first >> d.second;
    }
    sort(examGrades.begin(),examGrades.end(),cmp);
    reverse(examGrades.begin(),examGrades.end());
    
    long long currentTotalPoint = getTotal(examGrades);
    long long int requiredTotalPoint = (long long)requiredAvg * exams;
    
    long long int essayCount = 0;
    while(currentTotalPoint < requiredTotalPoint) {
        if(examGrades.back().first == maxGrade) {
            examGrades.pop_back();
            continue;
        }
        long long pointNeed = requiredTotalPoint - currentTotalPoint;
        long long pointAvailable = maxGrade - examGrades.back().first;
        long long pointShouldAdd = min(pointNeed,pointAvailable);
        currentTotalPoint += pointShouldAdd;
        essayCount += pointShouldAdd * examGrades.back().second;
        examGrades.pop_back();
    }

    cout << essayCount << endl;
    
    return 0;
}

