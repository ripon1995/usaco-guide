#include<iostream>
#include<vector>
#include<map>
#include<cmath>
#include<algorithm>
#include<stack>
#include<set>
#include<unordered_set>
#include<string>
using namespace std;

typedef vector<int>vi;
typedef vector<string>vs;
typedef map<int,vector<int> >mivi;
typedef pair<int,bool>pib;
typedef pair<int,int>pii;


int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<bool>toys(1e9+1,false);
    
    int n,m;
    cin >> n >> m;
    
    int d;
    vi ans;
    for(int i=0;i<n;i++) {
        cin >> d;
        toys[d] = true;
    }
    int totalCost = 0;
    for(int i=1;i<toys.size();i++) {
        if(!toys[i]) {
            totalCost += i;
            ans.push_back(i);
        }

        if(totalCost == m) {
            break;
        }
        else if(totalCost > m) {
            totalCost -= i;
            ans.pop_back();
            break;
        }
    }
    cout << ans.size() << endl;
    for(const auto &a : ans) cout << a << " ";
    return 0;
}
