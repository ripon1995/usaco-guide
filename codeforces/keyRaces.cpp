#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int s,v1,v2,t1,t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;
    int first = (v1*s) + (2 * t1);
    int second = (v2*s) + (2 * t2);
    if(first < second) {
        cout << "First" <<'\n';
    }
    else if(first > second) {
        cout << "Second" << '\n';
    }
    else {
        cout << "Friendship" << '\n';
    }
    return 0;
}