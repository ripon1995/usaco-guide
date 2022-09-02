#include<vector>
#include<iostream>
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
    cin.tie(nullptr);

    int n;
    cin >> n;
    int val;
    set<int> data;
    int ans = 0;
    for(int i=0;i<n;i++) {
        cin >> val;
        if(data.count(val)==0 && val<=n) {
            data.insert(val);
        }
        else {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
