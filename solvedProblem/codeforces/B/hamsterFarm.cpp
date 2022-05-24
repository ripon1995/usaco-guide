#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MAX_VAL = 1e18 + 1;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n;
    int k;
    cin >> n >> k;
    ll minRem = MAX_VAL;
    ll box;
    ll boxType,boxCount;
    for(int i=1;i<=k;i++) {
        cin >> box;
        ll rem = n % box;
        if(rem < minRem) {
            minRem = rem;
            boxType = i;
            boxCount = n/box;
        }
    }
    cout << boxType << " " << boxCount << '\n';
    return 0;
}
