#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef vector<int> VI;
typedef vector<bool> VB;
typedef vector<pair<int,int > > VPII;

bool cmp(pair<int,int>a, pair<int,int>b) {
	if(a.first == b.first) {
		return a.second > b.second;
	}
	return a.first < b.first;
}

int main() {
	// freopen("mountains.in", "r", stdin);
	// freopen("mountains.out", "w", stdout);

	int n;
	cin >> n;
	VPII mountains;

	for(int i=0;i<n;i++) {
		int x,y;
		cin >> x >> y;
		mountains.push_back(make_pair(x-y,x+y));
	}

	sort(mountains.begin(),mountains.end(), cmp);

	int countVisible = 0;
	int previousHeight = -1;

	for(const auto &m : mountains) {
		if(m.second > previousHeight) {
			countVisible++;
			previousHeight = m.second;
		}
	}

	cout << countVisible << endl;

	return 0;

}