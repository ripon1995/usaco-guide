#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,a,b;
    cin >> n >> a >> b;
    int paritalTable = 0;
    int guest;
    int denied = 0;
    for(int i=1;i<=n;i++) {
        cin >> guest;
        if(guest == 1) {
            if(a > 0) {
                a--;
            }
            else if(a <= 0 && b > 0) {
                b--;
                paritalTable++;        
            }
            else if(a<=0 && b<=0) {
                if(paritalTable > 0) {
                    paritalTable--;
                }
                else {
                    denied++;
                }
            }
        }
        else if(guest == 2) {
            if(b > 0) {
                b--;
            }
            else {
                denied += 2;
            }
        }
    }
    cout << denied << '\n';
    return 0;
}
