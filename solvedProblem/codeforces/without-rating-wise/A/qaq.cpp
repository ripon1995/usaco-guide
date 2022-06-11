#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MAX_VAL = 1e18 + 1;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string line;
    cin >> line;
    int countQAQ = 0;
    for(int i=0;i<line.length();i++) {
        for(int j=i+1;j<line.length();j++) {
            for(int k=j+1;k<line.length();k++) {
                if(line[i] == 'Q' && line[j] == 'A' && line[k] == 'Q') {
                    countQAQ++;
                }
            }
        }
    }
    cout << countQAQ << '\n';
    return 0;
}
