#include<iostream>
#include<vector>
#include<map>
#include<climits>
#include<algorithm>
using namespace std;

typedef vector<int> VI;
typedef vector<bool> VB;
typedef vector<pair<int,int > > VPII;

bool cmp(pair<int,int>a,pair<int,int>b) {
	if(a.second == b.second) {
		return a.first < b.first;
	}
	return a.second > b.second;
}


int main() {

	// freopen("rental.in", "r", stdin);
	// freopen("rental.out", "w", stdout);

    int N,M,R;
	cin >> N >> M >> R;
	VI milk(N);
	for(auto &m :milk) cin >> m;
	VPII store(M);
	for(auto &s : store) cin >> s.first >> s.second;
	VI rent(R);
	for(auto &r : rent) cin >> r;

	// sort elements
	sort(milk.rbegin(),milk.rend());
	sort(store.begin(),store.end(), cmp);
	sort(rent.begin(),rent.end());
	
	int start = 0;
	int storeStart = 0;
	long long int maxProfit = 0;
	while(start < milk.size()) {
		long long int profitFromMilk = 0;

		int lastStoreIndex = storeStart;
		int currentMilkAvailable = milk[start];
		int lastSoldMilkAmount = 0;
	
		// profit from milk
		while(lastStoreIndex < store.size()) {
			int soldAmount = min(store[lastStoreIndex].first, currentMilkAvailable);
			profitFromMilk += store[lastStoreIndex].second * soldAmount;

			currentMilkAvailable -= soldAmount;

			if(currentMilkAvailable == 0) {
				lastSoldMilkAmount = soldAmount;
				break;
			}
			
			else {
				lastStoreIndex++;
			}
		}



		if(rent.size() == 0 || profitFromMilk > rent.back()) {
			// sell milk
			storeStart = lastStoreIndex;
			maxProfit += profitFromMilk;
			if(storeStart < store.size()) store[storeStart].first -= lastSoldMilkAmount;
			start++;
		}
		else {
			// rent cow
			maxProfit += rent.back();
			rent.pop_back();
			milk.pop_back();
		}
	}

	cout << maxProfit << endl;

}


/*
5 3 4
6
2
4
7
1
10 25
2 10
15 15
250
80
100
40
*/
