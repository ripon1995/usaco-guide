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
        long long a,b,n;
        cin >> a >> b >> n;
        int operations = 0;
        while(a <= n && b <= n) {
            if(a <= b) {
                a += b;
            }
            else if(b < a) {
                b += a;
            }
            operations++;
        }
        cout << operations << endl;
    }
    return 0;
}
