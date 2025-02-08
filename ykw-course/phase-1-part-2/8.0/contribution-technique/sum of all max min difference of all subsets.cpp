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
#include<climits>
using namespace std;

#define ll long long int
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pair<int,int> > vpii;

const int N = 1e6 + 9;
vi nums(N);

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    
    for(int i=1;i<=n;i++) {
        cin >> nums[i];
    }

    sort(nums.begin()+1, nums.begin()+n+1);
    int ans = 0;
    for(int i=1;i<=n;i++) {
        for(int j=i+1;j<=n;j++) {
            ans += (nums[j]-nums[i]) * (1 << (j-i-1));
        }
    }
    
    cout << ans << endl;

    return 0;
}