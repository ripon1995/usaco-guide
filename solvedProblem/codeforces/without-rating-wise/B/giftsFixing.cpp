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

bool cmp(int a,int b) {
    return a>b;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tc;
    cin >> tc;
    while(tc--) {
        int val;
        cin >> val;
        vi candies(val);
        vi oranges(val);
        int minCandy = INT_MAX;
        int minOrange = INT_MAX;
        for(auto& c:candies) {
            cin >> c;
            minCandy = min(minCandy,c);
        }
        for(auto& o:oranges) {
            cin >> o;
            minOrange = min(minOrange,o);
        }
        long long ans = 0;
        for(int i=0;i<candies.size();i++) {
            int candyMove = abs(candies[i] - minCandy);
            int orangeMove = abs(oranges[i] - minOrange);
            ans += max(candyMove,orangeMove);
        }
        cout << ans << endl;
    }
    return 0;
}
