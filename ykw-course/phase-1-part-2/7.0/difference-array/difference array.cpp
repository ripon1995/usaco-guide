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
    int n;
    cin >> n;
    for(int i=1;i<=n;i++) {
        cin >> a[i];
    }

    for(int i=1;i<=n;i++) {
        d[i] = a[i] - a[i-1];
    }

    for(int i=1;i<=n;i++) {
        cout << d[i] << " ";
    }
    return 0;
}