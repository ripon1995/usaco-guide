#include<iostream>
#include<vector>
#include<map>
#include<climits>
using namespace std;



int main() {
    // freopen("maxcross.in", "r", stdin);
	// freopen("maxcross.out", "w", stdout);
    int tc;
    cin >> tc;
    while(tc--) {
        int l;
        cin >> l;
        vector<int>pf(l+1,0);
        for(int i=1;i<=l;i++) {
            char ch;
            cin >> ch;
            pf[i] = ch - '0';
        }

        for(int i=1;i<=l;i++) {
            pf[i] += pf[i-1];
        }
        map<int,long long int>sumEqualDistance;
        for(int i=0;i<=l;i++) {
            sumEqualDistance[pf[i] - i]++;
        }
        long long int ans = 0;
        for(auto s : sumEqualDistance) {
            ans += ((s.second * (s.second - 1)) / 2);
        }
        cout << ans << endl;
    }
    return 0;
}

/*
3
3
120
5
11011
6
600005
*/