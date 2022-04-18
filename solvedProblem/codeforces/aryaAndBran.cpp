#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int day,target;
    cin >> day >> target;
    int total = 0;
    int rem = 0;
    int c;
    int ans = -1;
    for(int i=1;i<=day;i++) {
        cin >> c;
        if(c+rem > 8) {
           rem += c - 8;
           total += 8;
        }
        else if(c+rem <= 8) {
            total += c+rem;
            rem = 0;
        }

        if(total >= target) {
            ans = i;
            break;
        }
    }
    cout << ans << '\n';
    return 0;
}
