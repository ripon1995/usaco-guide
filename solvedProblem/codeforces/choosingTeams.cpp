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

    int n,round;
    cin >> n >> round;
    vi students(n);
    for(auto& s:students) {
        cin >> s;
        s+=round;
    }
    sort(students.begin(),students.end());
    int countStudent = 0;
    for(auto s:students) {
        if(s<=5) {
            countStudent++;
        }
    }
    cout << countStudent/3 << endl;
    return 0;
}
