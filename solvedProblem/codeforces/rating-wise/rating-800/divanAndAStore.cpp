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
        int n,l,r,k;
        cin >> n >> l >> r >> k;
        vi prices;
        int price;
        for(int i=0;i<n;i++) {
            cin >> price;
            if(price>=l && price<=r) {
                prices.push_back(price);
            }
        }
        sort(prices.begin(),prices.end());
        int counter = 0;
        int totalPrice = 0;
        for(int i=0;i<prices.size();i++) {
            if(totalPrice + prices[i] > k) break;
            totalPrice += prices[i];
            counter++;
        }
        cout << counter << '\n';
    }

    return 0;
}