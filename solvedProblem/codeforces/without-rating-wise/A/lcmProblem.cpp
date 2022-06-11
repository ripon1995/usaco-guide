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
typedef map<int,vector<int> >mivi;
typedef pair<int,bool>pib;


int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc;
    cin >> tc;
    while(tc--) {
        int l,r;
        cin >> l >> r;
        if(2*l > r) {
            cout << "-1 -1" << endl;
        }
        else {
            cout << l << " " << 2*l << endl;
        }
    }
    
    return 0;
}