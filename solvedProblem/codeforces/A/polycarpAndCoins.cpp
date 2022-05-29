#include<iostream>
#include<vector>
#include<map>
#include<cmath>
using namespace std;

typedef vector<int>vi;
typedef map<int,vector<int> >mivi;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc;
    cin >> tc;
    while(tc--) {
        int val;
        cin >> val;
        
        pair<int,int>coins = make_pair(val/3,val/3);
        if(val%3 == 0) {
            coins = make_pair(val/3,val/3);
        }
        else if(val%3 == 1) {
            coins = make_pair(val/3+1,val/3);
        }
        else if(val%3 == 2) {
            coins = make_pair(val/3,val/3+1);
        }
        cout << coins.first << " " << coins.second << endl;
    }
    return 0;
}