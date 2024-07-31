#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<numeric>
#include<iomanip>
#include<sstream>
#include<stack>
#include<queue>
#include<map>
#include<vector>
#include<set>
using namespace std;

#define ll long long int

typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pair<int,int> > vpii;

const int N = 1e5 + 9;


vector<int>add[N];
vector<int>rmv[N];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,q;
    cin >> n >> q;
    while(q--) {
        int l,r,x;
        cin >> l >> r >> x;
        add[l].push_back(x);
        rmv[r+1].push_back(x);
    }

    map<int,int>mp;

    for(int i=1;i<=n;i++) {
        for(auto x : add[i]) {
            mp[x]++;
        }

        for(auto x : rmv[i]) {
            mp[x]--;
            if(mp[x] == 0) {
                mp.erase(x);
            }
        }

        cout << mp.size() << endl;
    }
    
    return 0;
}