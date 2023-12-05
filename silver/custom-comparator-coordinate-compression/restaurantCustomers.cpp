#include <iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

void solve() {
	int n,a,b;
	cin >> n;
	map<int,int>mp;
	while(n--) {
		cin >> a >> b;
		mp[a] += 1;
		mp[b] -= 1;
	}

	vector<int> da;
	for(auto m : mp) {
		da.push_back(m.second);
	}
	vector<int>pf;
	pf.push_back(da.front());
	for(int i=1;i<da.size();i++) {
		pf.push_back(pf.back() + da[i]);
	}

	int ans = *max_element(pf.begin(),pf.end());
	cout << ans << endl;

}
void solve2() {
	int n,a,b;
	cin >> n;
	vector<pair<int,int> > times;
	while(n--) {
		cin >> a >> b;
		times.push_back(make_pair(a,1));
		times.push_back(make_pair(b,-1));
	}

	sort(times.begin(),times.end());
	vector<int> da;
	da.push_back(times.front().second);

	for(int i=1;i<times.size();i++) {
		da.push_back(times[i].second);
	}

	vector<long>pf;
	pf.push_back(da.front());

	for(int i=1;i<da.size();i++) {
		pf.push_back(pf.back() + da[i]);
	}

	int ans = *max_element(pf.begin(),pf.end());
	cout << ans << endl;
}
int main() {
	solve();
	
}