#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<vector>
#include<iomanip>
#include<set>
using namespace std;

const int N = 1e5;
vector<int>nums(N);

bool found_sum(int x, int n, long long int s) {
    long long int sum = 0;
    for(int i=0;i<n;i++) {
        sum += nums[i]/x;
    }

    if(sum >= s) {
        return true;
    }

    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
    int n;
    long long int s;
    cin >> n;
    cin >> s;
    for(int i=0;i<n;i++) {
        cin >> nums[i];
    }
    int ans = -1;
    int l=0;
    int r = n-1;
    while(l<=r) {
        int mid = (l+r)/2;
        if(found_sum(mid, n,s)) {
            l = mid+1;
            ans = mid;
        }
        else {
            r = mid-1;
        }
    }

    cout << ans << endl;


    return 0;
}