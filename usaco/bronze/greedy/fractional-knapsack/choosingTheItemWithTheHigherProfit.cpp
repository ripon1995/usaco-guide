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

// Problem statement : 
// Given there are N items and each object have weight and profit , 
// we need to put these
// items in a knapsack of capacity W to get the maximum total Profit in the knapsack. 
// Note: Unlike 0/1 knapsack, you are allowed to break the item.




// custom comparator for greedyMethod 1
bool cmpForGreedy1(pair<int,int>p,pair<int,int>q) {
    // if profit of two items are equal then we should choose the smaller
    // weight so that we can take more items in the knapsack.
    // otherwise we will always choose the items with the greater weight
    if(p.first == q.first) {
        return p.second < q.second;
    }
    return p.first > q.first;
}

// way 1 : items having maximum profit will be selected first
void greedyMethod1(vi profit,vi weight,int knapsackSize) {
    // step 1 : convert the profit and weight array into a vector of pair
    // and sort based on the profit value
    vector<pair<int,int> > items;
    for(int i=0;i<profit.size();i++) {
        items.push_back(make_pair(profit[i],weight[i]));
    }
    sort(items.begin(),items.end(),cmpForGreedy1);

    int maxProfit = 0;
    vector<pair<int,int> > ans;
    int itemIndex = 0;
    while(knapsackSize > 0) {
        pii currentItem = items[itemIndex];
        if(currentItem.second <= knapsackSize) {
            maxProfit += currentItem.first;
            knapsackSize -= currentItem.second;
            ans.push_back(make_pair(currentItem.first,currentItem.second));
        }
        else {
            int p = knapsackSize*(currentItem.first/currentItem.second);
            maxProfit += p;
            ans.push_back(make_pair(p,knapsackSize));
            knapsackSize = 0;
        }
        itemIndex++;
    }

    cout << "MaxProfit : " << maxProfit << endl;
    
    for(auto a : ans) {
        cout << a.first << " : " << a.second << endl;
    }

}

int main() {

    // given
    vi profit;
    profit.push_back(9);
    profit.push_back(7);
    profit.push_back(25);
    profit.push_back(15);
    profit.push_back(12);
    profit.push_back(2);
    profit.push_back(8);
    
    vi weight;
    weight.push_back(1);
    weight.push_back(2);
    weight.push_back(10);
    weight.push_back(3);
    weight.push_back(4);
    weight.push_back(1);
    weight.push_back(3);

    int knapsackSize = 16;
    // this are the given data

    greedyMethod1(profit,weight,knapsackSize);



    return 0;
}