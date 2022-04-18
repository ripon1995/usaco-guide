#include<bits/stdc++.h>
using namespace std;
typedef map<int,int>mii;
typedef map<char,int>mci;
typedef vector<int> vi; 
typedef long long ll;
const ll LLMAX = 1e18; 
 
vector<string> allString(string line) {
    vector<string>lines;
    do {
        lines.push_back(line);
    }while(next_permutation(line.begin(),line.end()));
 
    return lines;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string line;
    getline(cin,line);
    sort(line.begin(),line.end());
    vector<string> result = allString(line);
    cout << result.size() << '\n';
    for(auto r:result) {
        cout << r << '\n';
    }
    return 0;
}