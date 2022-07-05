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
        int val;
        cin >> val;
        int sum = 0;
        int currentVal = 9;
        set<int>taken;
        while(val && currentVal) {
            if(val >= currentVal) {
                taken.insert(currentVal);
                val -= currentVal;
                currentVal--;
            }
            else {
                currentVal--;
            }
        }
        if(val == 0) {
            for(auto t : taken) cout << t;
            cout << endl;
        }
        else {
            cout << "-1" << endl;
        }
    }
    return 0;
}