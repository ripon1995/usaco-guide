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
        int n,k;
        cin >> n >> k;
        vector<long long> barrels(n);
        for(auto &b:barrels) {
            cin >> b;
        }
        sort(barrels.begin(),barrels.end());
        reverse(barrels.begin(),barrels.begin()+n-1);

        for(int i=0;i<k;i++) {
            barrels.back() += barrels[i];
            barrels[i] = 0;
        }
        
        cout << barrels.back() - barrels.front() << endl;
    }
    
    return 0;
}