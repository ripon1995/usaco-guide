#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int num;
    cin >> num;
    map<int,int>planesLove;
    int p;
    for(int i=1;i<=num;i++) {
        cin >> p;
        planesLove[i] = p;
    }
    string foundLove = "NO";
    for(int i=1;i<=num;i++) {
        if(i == planesLove[planesLove[planesLove[i]]]) {
            foundLove = "YES";
            break;
        }
    }
    cout << foundLove << '\n';
    return 0;
}
