#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<numeric>
#include<iomanip>
#include<sstream>
#include<stack>
#include<queue>
#include<map>
#include<vector>
#include<set>
using namespace std;
typedef pair<int,int> pii;

/*
problem link : https://codeforces.com/problemset/problem/1352/C
*/

const int N = 2e5 + 9;
vector<int> nums(N,0);

bool is_possible_to_split(long long int x,int k,int n) {
    long long int not_divided_by_n = x - (x/n);
    if(not_divided_by_n < k) {
        return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int tc;
    cin >> tc;
    while(tc--) {
        int n,k;
        cin >> n >> k;
        long long int l=0,r=1e18;
        long long int ans = 0;
        while(l<=r) {
            long long int mid = (l+r)/2;
            if(is_possible_to_split(mid,k,n)) {
                ans = mid;
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }
        cout << ans << endl;
    }


    return 0;
}