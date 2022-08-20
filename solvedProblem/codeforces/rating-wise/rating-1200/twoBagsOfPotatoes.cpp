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

    int y,k,n;
    cin >> y >> k >> n;
    set<int>ans;
    for(int i=k;i<=n;i+=k) {
        int x = i - y;
        if(x > 0) {
            ans.insert(x);
        }
    }
    if(ans.empty()) {
        cout << "-1" << endl;
    }
    else {
        for(auto a : ans) cout << a << " ";
    }
    return 0;
}
