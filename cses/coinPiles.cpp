#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tc;
    cin >> tc;
    int a,b;
    while(tc--) {
        cin >> a >> b;
        if(((2*a - b) >= 0 && (2*a - b)%3 == 0) && ((2*b - a) >= 0 && (2*b - a)%3 == 0)) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}