#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MAX_VAL = 1e18 + 1;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int len,wid;
    cin >> len >> wid;
    char ch;
    int blackPainted = 0;
    int minX = INT_MAX, minY = INT_MAX, maxX = INT_MIN, maxY = INT_MIN;
    for(int i=0;i<len;i++) {
        for(int j=0;j<wid;j++) {
            cin >> ch;
            if(ch == 'B') {
                minX = min(minX,i);
                minY = min(minY,j);
                maxX = max(maxX,i);
                maxY = max(maxY,j);
                blackPainted++;
            }
        }
    }
    int length = max(maxX-minX+1,maxY-minY+1);
    if( blackPainted == 0) {
        cout << "1" << '\n';
    }
    else {
        if(length > len || length > wid) {
            cout << "-1" <<'\n';
        }
        else {
            cout << (length*length) - blackPainted << '\n';
        }
    }
    return 0;
}

