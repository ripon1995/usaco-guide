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


bool cmp(pair<int,int>A,pair<int,int>B) {
    if(A.first == B.first) {
        return A.second < B.second;
    }

    return A.first < B.first;
}


void debug(vector<pair<int,int> > exams) {
    for(const auto &e : exams) {
        cout << e.first << " " << e.second << endl;
    }
    cout << endl;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<pair<int,int> >exams(n);
    for(auto &e : exams) {
        cin >> e.first >> e.second;
    }
    sort(exams.begin(),exams.end(),cmp);
    int ans = exams.front().second;
    for(int i=1;i<exams.size();i++) {
        if(exams[i].second >= ans) {
            ans = exams[i].second;
        }
        else {
            ans = exams[i].first;
        }
    }
    cout << ans << endl;
    
    return 0;
}
