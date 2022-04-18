#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int zeroCount = 0;
    int num = 5;
    while(num <= n) {
        zeroCount += floor(n/num);
        num *= 5;
    }
    cout << zeroCount << '\n';
    return 0;
}