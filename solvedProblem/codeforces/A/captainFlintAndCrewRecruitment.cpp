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

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc;
    cin >> tc;
    while(tc--) {
        int val;
        cin >> val;
        if(val <= 30) {
            cout << "NO" << endl;
        }
        else if(val == 36 || val == 40 || val == 44) {
            cout << "YES" << endl;
            cout << "6 10 15 " << val-31 << endl;
        }
        else {
            cout << "YES" << endl;
            cout << "6 10 14 " << val - 30 << endl;
        }
    }    
    
    return 0;
}