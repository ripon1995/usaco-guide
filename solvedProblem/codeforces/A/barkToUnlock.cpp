#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string pass;
    int n;
    cin >> pass >> n;
    set<char>first;
    set<char>second;
    string word;
    bool isMathced = false;
    for(int i=0;i<n;i++) {
        cin >> word;
        if(word == pass) {
            isMathced = true;
            break;
        }
        first.insert(word[0]);
        second.insert(word[1]);
    }
    if((first.count(pass[1]) && second.count(pass[0])) || isMathced == true) {
        cout << "YES" << '\n';
    }
    else cout << "NO" << '\n';
    return 0;
}