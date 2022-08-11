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

    int num;
    cin >> num;
    vi ans;
    while(num>0) {
        string numToString = to_string(num);
        string currentNum;
        for(const auto &ns : numToString) {
            if(ns=='0') {
                currentNum.push_back('0');
            }
            else {
                currentNum.push_back('1');
            }
        }
        int qb = stoi(currentNum);
        ans.push_back(qb);
        num -= qb;
    }
    cout << ans.size() << endl;
    for(const auto &a : ans) {
        cout << a << " ";
    }
    return 0;
}
