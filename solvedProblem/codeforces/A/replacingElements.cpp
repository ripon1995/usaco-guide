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
        int len,d;
        cin >> len >> d;
        vi data(len);
        for(auto& d : data) {
            cin >> d;
        }
        sort(data.begin(),data.end());
        int ind = upper_bound(data.begin(),data.end(),d)-data.begin();
        bool ans = true;
        if(ind < 2) {
            ans = false;
        }
        else if(ind >= 2 && ind != data.size()) {
            int sum = data[0] + data[1];
            if(sum > d) {
                ans = false;
            }
        }
        
        (ans == true) ? cout << "YES" << '\n' : cout << "NO" << '\n';
    }
    return 0;
}
