#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int n;
        cin >> n;
        vector<int> prices(n);
        for(auto &p : prices) cin >> p;

        sort(prices.begin(),prices.end());
        reverse(prices.begin(),prices.end());
        int totalCost = 0;
        for(int i=2;i<prices.size();i+=3) {
            totalCost += prices[i];
        }
        cout << totalCost << endl;
    }
    return 0;
}