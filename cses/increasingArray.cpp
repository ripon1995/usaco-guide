#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int>num;
    int val;
    for(int i=1;i<=n;i++) {
        cin >> val;
        num.push_back(val);
    }
    int currentMax = num[0];
    long long  res = 0;
    for(int i=1;i<num.size();i++) {
        if(currentMax > num[i]) {
            res += currentMax - num[i];
        }
        else {
            currentMax = num[i];
        }
    }
    cout << res << '\n';
    return 0;
}