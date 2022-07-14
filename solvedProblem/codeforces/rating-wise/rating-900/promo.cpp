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

    int n,q;
    cin >> n >> q;
    vi prices(n);
    for(auto &p : prices) {
        cin >> p;
    }
    sort(prices.begin(),prices.end());
    reverse(prices.begin(),prices.end());
    vector<long long> prefixSum;
    prefixSum.push_back(prices.front());
    for(int i=1;i<prices.size();i++) {
        prefixSum.push_back(prefixSum.back()+prices[i]);
    }
    int purchasedItem,freeItem;
    long long ans = 0;
    for(int i=1;i<=q;i++) {
        cin >> purchasedItem >> freeItem;
        if(purchasedItem == freeItem) {
            ans = prefixSum[purchasedItem-1];
        }
        else {
            ans = prefixSum[purchasedItem-1] - prefixSum[purchasedItem-1-freeItem];
        }
        cout << ans << '\n';
    }
    return 0;
}

