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

const int N = 1e3 + 9;

int a[N][N], pref[N][N];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,m;
    cin >> n >> m;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            cin >> a[i][j];
        }
    }

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            pref[i][j] = pref[i-1][j] + pref[i][j-1] - pref[i-1][j-1] + a[i][j];
        }
    }

    int q;
    cin >> q;
    while(q--) {
        int ans = 0;
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        ans += pref[x2][y2] - pref[x1-1][y2] - pref[x2][y1-1] + pref[x1-1][y1-1];
        cout << ans << endl;
    }    
    
    return 0;
}