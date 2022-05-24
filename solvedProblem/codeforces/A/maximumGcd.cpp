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
    int n;
    while(tc--) {
        cin >> n;
        if(n%2==0) {
            cout << __gcd(n,n/2) << endl;
        }
        else {
            cout << __gcd(n-1,(n-1)/2) << endl;
        }
    }

    return 0;
}
