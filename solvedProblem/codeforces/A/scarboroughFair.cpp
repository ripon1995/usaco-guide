#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MAX_VAL = 1e18 + 1;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,query;
    string line;
    cin >> n >> query >> line;
    int left,right;
    char c1,c2;
    for(int i=0;i<query;i++) {
        cin >> left >> right >> c1 >> c2;
        for(int j = left-1;j<=right-1;j++) {
            if(line[j] == c1) {
                line[j] = c2;
            }
        }
    }
    cout << line << '\n';
    return 0;
}

