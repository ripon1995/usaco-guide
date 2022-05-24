#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tc;
    cin >> tc;
    int x,y,z;
    int sumx=0,sumy=0,sumz=0;
    while(tc--) {
        cin >> x >> y >> z;
        sumx += x;
        sumy += y;
        sumz += z;
    }

    if(sumx==0 && sumy==0 && sumz==0) {
        cout << "YES" << '\n';
    }
    else {
        cout << "NO" << '\n';
    }
    return 0;
}