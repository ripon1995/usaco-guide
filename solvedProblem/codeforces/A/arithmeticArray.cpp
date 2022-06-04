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
        int len;
        cin >> len;
        int sum = 0;
        int v;
        for(int i=0;i<len;i++) {
            cin >> v;
            sum += v;
        }
        int ans = 0;
        if(sum > len) {
            ans = sum - len;
        }
        else if(sum < len) {
            ans = 1;
        }
        cout << ans << '\n';
    }
    return 0;
}
