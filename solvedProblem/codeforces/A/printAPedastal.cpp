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
    
    int tc;
    cin >> tc;
    while(tc--) {
        int bolcks;
        cin >> bolcks;
        int first = (bolcks+3)/3;
        int second = first - 1;
        int third = first - 2;
        int total = first+second+third;
        if(bolcks - total == 2) {
            first++;
            second++;
        }
        else if(bolcks-total == 1) {
            first++;
        }

        cout << second << " " << first << " " << third << endl;
    }
    return 0;
}
