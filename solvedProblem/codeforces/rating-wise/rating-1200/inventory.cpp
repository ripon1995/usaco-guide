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
    vi data(n);
    for(auto &d : data) {
        cin >> d;
    }
    vi ans(n,0);
    vi index;
    set<int>inventory;
    for(int i=0;i<data.size();i++) {
        if(data[i]<=n && inventory.count(data[i])==0) {
            inventory.insert(data[i]);
            ans[i] = data[i];
        }
        else {
            index.push_back(i);
        }
    }

    int ind = 0;
    for(int i=1;i<=n;i++) {
        if(inventory.count(i)) {
            continue;
        }
        ans[index[ind++]] = i;
    }

    for(const auto &a : ans) {
        cout << a << " ";
    }
    return 0;
}
