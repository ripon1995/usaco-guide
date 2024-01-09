#include<iostream>
#include<vector>
#include<map>
#include<climits>
using namespace std;



int main() {
    // freopen("maxcross.in", "r", stdin);
	// freopen("maxcross.out", "w", stdout);
    int n,k,b;
    cin >> n >> k >> b;
    vector<int>ps(n,0);
    int ind;
    for(int i=0;i<b;i++) {
        cin >> ind;
        ind--;
        ps[ind]++;
    }
    // for(auto p : ps) cout << p << " ";
    // cout << endl;
    for(int i=1;i<ps.size();i++) {
        ps[i] += ps[i-1];
    }
    int res = INT_MAX;
    for(int i=0;i<n-k;i++) {
        res = min(res,(ps[i+k-1]-ps[i]));
    }
    // for(auto p : ps) cout << p << " ";
    cout << res << endl;
    return 0;
}

/*
10 6 5
2 10 1 5 9
*/