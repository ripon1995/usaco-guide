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
        int l,r,k;
        cin >> l >> r >> k;
        bool isPossible = true;
        if(l==r) {
            if(l==1 && r==1) {
                isPossible = false;
            }
        }
        else {
            int oddCount = (r-l+1) - (r/2-(l-1)/2);
            if(oddCount>k)isPossible = false;
        }
        cout << (isPossible ? "YES" : "NO") << '\n';
    }

    return 0;
}