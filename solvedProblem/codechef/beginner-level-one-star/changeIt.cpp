#include<bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int val;
        cin >> val;
        map<int,int>data;
        int v;
        for(int i=0;i<val;i++) {
            cin >> v;
            data[v]++;
        }
        int ans = 0;
        for(const auto &d : data) {
            ans = max(ans,d.second);
        }

        cout << val - ans << endl; 
    }
    return 0;
}