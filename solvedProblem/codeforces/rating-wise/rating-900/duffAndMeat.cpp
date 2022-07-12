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
    
    int days;
    cin >> days;
    int weight,unitPrice;
    int minUnitPrice = INT_MAX;
    map<int,vector<int> > data;
    for(int i=0;i<days;i++) {
        cin >> weight >> unitPrice;
        minUnitPrice = min(minUnitPrice,unitPrice);
        data[minUnitPrice].push_back(weight);
    }

    long long totalCost = 0;
    for(const auto &dd : data) {
        long long totalWeight = 0;
        for(const auto &d : dd.second) {
            totalWeight += d;
        }
        totalCost += (totalWeight * dd.first);
    }
    cout << totalCost << '\n';
    return 0;
}
