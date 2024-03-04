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
problem link: https://cses.fi/problemset/task/1085
*/

const int N = 2e5 + 9;
vector<int> nums(N,0);

bool is_possible_to_split(long long int x, int n, int k) {
    for(int i=0;i<n;i++) {
        if(nums[i]>x) {
            return false;
        }
    }
    long long int sum = nums[0];
    long long int split_count = 1;
    for(int i=1;i<n;i++) {
        if(sum + nums[i] <= x) {
            sum += nums[i];
        }
        else {
            sum = nums[i];
            split_count++;
        }
    }
    
    return split_count <= k;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin >> n >> k;
    for(int i=0;i<n;i++) {
        cin >> nums[i];
    }

    long long int l=0,r=2e14;
    long long int ans = -1;
    while(l<=r) {
        long long int mid = (l+r)/2;
        // cout << mid << endl;
        if(is_possible_to_split(mid,n,k)) {
            ans = mid;
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }

    cout << ans << endl;


    return 0;
}