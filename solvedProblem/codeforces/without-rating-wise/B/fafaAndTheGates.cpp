#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    string line;
    cin >> n >> line;
    pair<int,int>curPos = make_pair(0,0);
    pair<int,int>nextPos = make_pair(0,0);
    int cost = 0;
    for(auto l:line) {
        if(tolower(l) == 'u') {
            nextPos.second += 1;
        }
        if(tolower(l) == 'r') {
            nextPos.first += 1;
        }
        
        if((nextPos.first > nextPos.second && curPos.first < curPos.second) || (nextPos.first < nextPos.second && curPos.first > curPos.second)) {
            cost++;
        }
        if(nextPos.first == nextPos.second) {
            continue;
        }
        curPos = nextPos;
    }
    cout << cost << '\n';
    return 0;
}
