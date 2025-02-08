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

    int ans = 0;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            ans += nums[i] + nums[j];
        }
    }
    cout << ans << endl;
    ans = 0;

    // alternate soultion
    for(int i=1;i<=n;i++) {
        ans += 2*n*nums[i];
    }

    cout << ans << endl;
    
    return 0;
}