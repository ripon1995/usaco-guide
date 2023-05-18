#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

int main() {
    // freopen("stacking.in", "r", stdin);
	// freopen("stacking.out", "w", stdout);

    int n,q;
    cin >> n >> q;
    vector<int> ps(n,0);
    vector<int>da(n,0);

    int l,r;
    while(q--) {
        cin >> l >> r;
        da[l-1] += 1;
        da[r] -= 1;
    }
    ps[0] = da[0];
    for(int i=1;i<ps.size();i++) {
        ps[i] = ps[i-1] + da[i];
    }

    sort(ps.begin(),ps.end());
    cout << ps[ps.size()/2] << endl;

    return 0;
}

/*
7 4
5 5
2 4
4 6
3 5
*/