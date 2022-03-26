#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    string flight;
    cin >> n >> flight;
    int sf = 0;
    int fs = 0;
    for(int i=1;i<flight.length();i++) {
        if(tolower(flight[i-1]) == 's' && tolower(flight[i]) == 'f') {
            sf++;
        }
        else if(tolower(flight[i-1]) == 'f' && tolower(flight[i]) == 's') {
            fs++;
        }
    }
    (sf > fs) ? cout << "YES" << '\n' : cout << "NO" << '\n';
    return 0;
}
