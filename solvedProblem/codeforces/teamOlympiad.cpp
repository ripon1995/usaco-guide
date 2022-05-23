#include<bits/stdc++.h>
using namespace std;

typedef vector<int>vi;
typedef vector<string>vs;
typedef map<int,int> mii;
typedef map<string,int> msi;
typedef map<string,string>mss;
typedef map<int,pair<int,int>> mipii;
typedef map<int,vector<int>> mivi;
typedef pair<string,int>psi;
typedef set<string>ss;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    mivi groupedStudents;
    int students;
    cin >> students;
    int st;
    for(int i=1;i<=students;i++) {
        cin >> st;
        groupedStudents[st].push_back(i);
    }
    int result = min(groupedStudents[1].size(),min(groupedStudents[2].size(),groupedStudents[3].size()));
    vector<tuple<int,int,int>>res;
    for(int i=1;i<=result;i++) {
        int first = groupedStudents[1].back();
        int second = groupedStudents[2].back();
        int third = groupedStudents[3].back();
        res.push_back(make_tuple(first,second,third));
        groupedStudents[1].pop_back();
        groupedStudents[2].pop_back();
        groupedStudents[3].pop_back();
    }

    cout << result << endl;
     int f,s,t;
    for(auto r:res) {
        tie(f,s,t) = r;
        cout << f << " " << s << " " << t << endl;
    }
    return 0;
}
