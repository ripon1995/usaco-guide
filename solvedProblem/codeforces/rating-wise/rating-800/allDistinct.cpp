#include<iostream>
#include<vector>
#include<map>
#include<cmath>
#include<algorithm>
#include<stack>
#include<set>
#include<unordered_set>
using namespace std;

typedef vector<int>vi;
typedef vector<string>vs;
typedef map<int,vector<int> >mivi;
typedef pair<int,bool>pib;
typedef pair<int,int>pii;

int difference(string a,string b) {
    int dif = 0;
    for(int i=0;i<a.length();i++) {
        dif += abs((int)a[i] - (int)b[i]);
    }
    return dif;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc;
    cin >> tc;
    while(tc--) {
        int len;
        cin >> len;
        map<int,int>data;
        int val;
        for(int i=0;i<len;i++) {
            cin >> val;
            data[val]++;
        }
        int countElement = 0;
        for(const auto &d : data) {
            if(d.second > 1) {
                countElement += (d.second - 1);
            }
        }
        int ans = 0;
        if(countElement % 2 == 0) {
            ans = data.size();
        }
        else {
            ans = data.size() - 1;
        }
        cout << ans << endl;
    }

    return 0;
}