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
// problem link
// https://codeforces.com/contest/1201/problem/C

const int N = 2e5 + 9;
vector<int> nums(N,0);
bool is_possible_median(int n, int k, long long int median) {
    long long int operations = 0;
    for(int i=(n/2);i<n;i++) {
        if(nums[i] < median) {
            operations += median - nums[i];
        }
    }

    return operations <= k;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin >> n >> k;
    for(int i=0;i<n;i++) {
        cin >> nums[i];
    }
    sort(nums.begin(),nums.begin()+n);
    long long int l=0,r=2e9;
    int ans = 0;
    while(l<=r) {
        long long int mid = (l+r)/2;
        if(is_possible_median(n,k,mid)) {
            ans = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }

    cout << ans << endl;

    return 0;
}