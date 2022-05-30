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
        int n;
        cin >> n;
        set<int>data;
        int val;
        for(int i=0;i<n;i++) {
            cin >> val;
            data.insert(val);
        }
        cout << data.size() << endl;
    }
    
    return 0;
}