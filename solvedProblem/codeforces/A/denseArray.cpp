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
        int n;
        cin >> n;
        vi arr(n);
        for(auto& a : arr) {
            cin >> a;
        }
        int ans = 0;
        for(int i=1;i<arr.size();i++) {
            int minValue = min(arr[i-1],arr[i]);
            int maxValue = max(arr[i-1],arr[i]);
            if( maxValue > (2 * minValue)) {
                while(2 * minValue < maxValue) {
                    ans++;
                    minValue *= 2;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
