#include<bits/stdc++.h>
using namespace std;

typedef vector<int>vi;
typedef map<int,int> mii;
typedef map<string,int> msi;
typedef map<string,string>mss;
typedef unordered_map<int,int>umii;
typedef map<int,pair<int,int>> mipii;
typedef map<int,vector<int>> mivi;
typedef pair<string,int>psi;

string getNumber(vi course) {
    sort(course.begin(),course.end());
    string num = "";
    for(auto c:course) {
        num += to_string(c);
    }
    return num;
}

psi getIndex(msi result) {
    psi data;
    int maxPopularity = INT_MIN;
    for(auto r:result) {
        if(r.second > maxPopularity) {
            maxPopularity = r.second;
            data = make_pair(r.first,r.second);
        }
    }
    return data;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    while(cin >> n && n!=0) {
        
        msi result;
        for(int i=0;i<n;i++) {
            vi courses(5);
            for(int j=0;j<5;j++) {
                cin >> courses[j];
            }
            string crs = getNumber(courses);
            if(result.count(crs)==0) {
                result[crs] = 1;
            }
            else {
                result[crs]++;
            }
        }
        psi maxPopularCourse = getIndex(result);
        int totalStudents = 0;
        for(auto r:result) {
            if(r.second == maxPopularCourse.second) {
                totalStudents += r.second;
            }
        }
        cout << totalStudents << endl;
    }
    
    return 0;
}
