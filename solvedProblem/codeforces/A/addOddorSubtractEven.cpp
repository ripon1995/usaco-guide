#include<iostream>
#include<vector>
#include<map>
#include<cmath>
#include<algorithm>
#include<stack>
using namespace std;

typedef vector<int>vi;
typedef map<int,vector<int> >mivi;
typedef pair<int,bool>pib;


int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    int tc;
    cin >> tc;
    int a , b;
    while(tc--) {
        cin >> a >> b;
        int ans = 0;
        if(a < b) {
            int val = b - a;
            if(val%2 == 0) {
                ans = 2;
            }
            else {
                ans = 1;
            }
        }
        else if(a > b) {
            int val = a - b;
            if(val%2 == 1) {
                ans = 2;
            }
            else {
                ans = 1;
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}