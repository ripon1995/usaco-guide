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


int inp(int n) {
    int maxVal = INT_MIN;
    int val;
    for(int i=0;i<n;i++) {
        cin >> val;
        maxVal = max(maxVal,val);
    }
    return maxVal;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc;
    cin >> tc;
    while(tc--) {
        int n,m;
        cin >> n;
        int alice = inp(n);
        cin >> m;
        int bob = inp(m);
        if(alice == bob) {
            cout << "Alice" << endl;
            cout << "Bob" << endl;
        }
        else if(alice > bob) {
            cout << "Alice" << endl << "Alice" << endl;
        }
        else if(bob > alice) {
            cout << "Bob" << endl << "Bob" << endl;
        }
    }
    
    return 0;
}