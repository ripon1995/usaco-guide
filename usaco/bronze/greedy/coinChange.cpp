// given coins value = 1,5,10,20,50,100,500;
// given value = 530;
// we have to find minimum number of coins required to make 520

#include<bits/stdc++.h>
using namespace std;


map<int,int> greedyCoinChange(vector<int>coins,int val) {
    map<int,int>change;
    for(int i=coins.size()-1;i>=0;i--) {
        if(val <= 0) {
            break;
        }
        if(val >= coins[i]) {
            change[coins[i]] = val/coins[i];
            val %= coins[i];
        }
    }
    return change;
}


int main() {
    vector<int>coins = {1,2,5,10,20,50,100,500};
    map<int,int>result = greedyCoinChange(coins,530);
    for(const auto& r : result) {
        cout << r.first << " " << r.second << endl;
    }
    return 0;
}