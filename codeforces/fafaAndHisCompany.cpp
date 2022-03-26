#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int maxLead = n/2;
    int leadCount = 0;
    for(int i=1;i<=maxLead;i++) {
        if((n-i)%i == 0) {
            leadCount++;
        }
    }
    cout << leadCount << '\n';
    return 0;
}
