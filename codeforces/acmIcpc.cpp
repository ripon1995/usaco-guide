#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MAX_VAL = 1e18 + 1;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector<int>v(6,0);
    int sum = 0;
    for(int i=0;i<v.size();i++) {
        cin >> v[i];
        sum += v[i];
    }
    if(sum%2 == 1) {
        cout << "NO" << '\n';
    }
    else {
        bool isPossible = false;
        sum /= 2;
        for(int i=0;i<v.size();i++) {
            for(int j=i+1;j<v.size();j++) {
                for(int k=j+1;k<v.size();k++) {
                    if(v[i]+v[j]+v[k] == sum) {
                        isPossible = true;
                        break;
                    }
                }
            }
        }
        (isPossible == true) ? cout << "YES" << '\n' : cout << "NO" << '\n';
    }
    return 0;
}

