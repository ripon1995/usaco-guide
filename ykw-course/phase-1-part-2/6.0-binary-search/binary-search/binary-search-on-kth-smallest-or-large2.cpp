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
problem link : https://codeforces.com/edu/course/2/lesson/6/5/practice/contest/285084/problem/C
*/

const int N = 1e5 + 9;
vector<int> nums_a(N,0);
vector<int> nums_b(N,0);

bool f(long long int x,int k,int n) { // number of pairs <= x
    long long int number_of_pair_equal_to_x = 0;
    for(int i=0;i<n;i++) {
        number_of_pair_equal_to_x += upper_bound(nums_b.begin(),nums_b.begin()+n,(x-nums_a[i])) - nums_b.begin();
    }

    if(number_of_pair_equal_to_x >= k) {
        return true;
    }
    return false;

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,k;
    cin >> n >> k;
    for(int i=0;i<n;i++) {
        cin >> nums_a[i];
    }
    for(int i=0;i<n;i++) {
        cin >> nums_b[i];
    }
    sort(nums_a.begin(),nums_a.begin()+n);
    sort(nums_b.begin(),nums_b.begin()+n);
    long long int l=0,r=1e18;
    long long int ans = 0;
    while(l<=r) {
        long long int mid = (l+r)/2;
        if(f(mid,k,n)) {
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