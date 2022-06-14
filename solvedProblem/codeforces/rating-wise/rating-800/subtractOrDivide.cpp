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
    int val;
    while(tc--) {
        cin >> val;
        int ans = 0;
        if(val%2 == 0) {
            (val == 2 ) ? ans = 1 : ans = 2;
        }
        else {
            (val == 3) ? ans = 2 : ans = 3;
            if(val == 1) {
                ans = 0;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}