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
int a[N], d[N];


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,q;
    cin >> n >> q;
    for(int i=1;i<=n;i++) {
        cin >> a[i];
    }

    for(int i=1;i<=n;i++) {
        d[i] = a[i] - a[i-1];
    }

    for(int i=1;i<=q;i++) {
        int l,r,x;
        cin >> l >> r >> x;
        d[l] += x;
        d[r+1] -= x;
    }

    for(int i=1;i<=n;i++) {
        a[i] = a[i - 1] + d[i];
    }

    for(int i=1;i<=n;i++) {
        cout << a[i] << " ";
    }
    
    return 0;
}