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

int a[N][N], d[N][N], pref[N][N];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,m;
    cin >> n >> m;

    int q;
    cin >> q;
    while(q--) {
        int ans = 0;
        int x1,y1,x2,y2,p;
        cin >> x1 >> y1 >> x2 >> y2 >> p;
        d[x1][y1] += p;
        d[x1][y2+1] -= p;
        d[x2+1][y1] -= p;
        d[x2+1][y2+1] += p;
    }

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            pref[i][j] = pref[i-1][j] + pref[i][j-1] - pref[i-1][j-1] + d[i][j];
        }
    }

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            pref[i][j] += a[i][j];
        }
    }

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            cout << pref[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}