#include<vector>
#include<iostream>
#include<map>
#include<cmath>
#include<algorithm>
#include<stack>
#include<set>
#include<unordered_set>
#include<string>
using namespace std;

typedef vector<int>vi;
typedef vector<string>vs;
typedef map<int,vector<int> >mivi;
typedef pair<int,bool>pib;
typedef pair<int,int>pii;


int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    map<char,string>d;
    d['2'] = "2";
    d['3'] = "3";
    d['4'] = "322";
    d['5'] = "5";
    d['6'] = "53";
    d['7'] = "7";
    d['8'] = "7222";
    d['9'] = "7332";
    int n;
    long long int num;
    cin >> n >> num;
    string numToString = to_string(num);
    string ans;
    for(const auto &ns : numToString) {
        if(d.count(ns)) {
            ans += d[ns];
        }
    }
    sort(ans.begin(),ans.end());
    reverse(ans.begin(),ans.end());
    cout << ans << endl;
    
    return 0;
}
