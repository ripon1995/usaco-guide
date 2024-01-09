#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int maxProfit = INT_MIN;

void max_profit(int ind,int size, pair<int,int> items[],int capacity, int currentProfit) {
    if(ind>=size) {
        maxProfit = max(maxProfit,currentProfit);
        return;
    }
    if(capacity < items[ind].first) {
        max_profit(ind+1,size,items,capacity,currentProfit);
        return;
    }
    max_profit(ind+1,size,items,capacity-items[ind].first,currentProfit+items[ind].second);
    max_profit(ind+1,size,items,capacity,currentProfit);
    maxProfit = max(maxProfit,currentProfit);
}

int main() {
    int n,capacity;
    cin >> n >> capacity;
    pair<int,int> items[n];
    for(int i=0;i<n;i++) {
        cin >> items[i].first >> items[i].second;
    }
    max_profit(0,n,items,capacity,0);
    cout << maxProfit << endl;
    return 0;
}