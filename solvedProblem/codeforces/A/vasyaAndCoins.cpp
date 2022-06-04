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
        int oneBurle,twoBurle;
        cin >> oneBurle >> twoBurle;
        int ans;
        if(oneBurle == 0) {
            ans = 1;
        }
        else if(twoBurle == 0) {
            ans = oneBurle+1;
        }
        else if(oneBurle && twoBurle) {
            ans = oneBurle + (twoBurle*2) + 1;
        }
        cout << ans << '\n';
    }
    return 0;
}
