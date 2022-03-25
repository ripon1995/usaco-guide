#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string line;
    cin >> line;
    map<char,string>mp;
    for(auto c:line)mp[c].push_back(c);
    int oddCount = 0;
    char oddChar;
    for(auto m:mp) {
        if(m.second.length()%2 == 1) {
            oddCount++;
            oddChar = m.first;
        }
    }
    if(oddCount>1) {
        cout << "NO SOLUTION" << '\n';
    }
    else if(oddCount == 1) {
        string res = "";
        res += mp[oddChar];
        for(auto m:mp) {
            if(m.first == oddChar) {
                continue;
            }
            string half = m.second.substr(0,m.second.length()/2);
            res = half + res + half;
        }
        cout << res << '\n';
    }
    else if(oddCount == 0) {
        string res = "";
        for(auto m:mp) {
            string half = m.second.substr(0,m.second.length()/2);
            res = half + res + half;
        }
        cout << res << '\n';
    }
    return 0;
}