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
        int len;
        cin >> len;
        int oddCount = 0;
        int evenCount = 0;
        int val;
        for(int i=0;i<len;i++) {
            cin >> val;
            (val%2 == 0) ? evenCount++ : oddCount++;
        }
        int ans = min(oddCount,evenCount);
        cout << ans << endl;
    }
    
    return 0;
}