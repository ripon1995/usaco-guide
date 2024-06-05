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
 
const int N = 1e5 + 9;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int>nums(n);
    for(int i=0;i<n;i++) {
        cin >> nums[i];
    }
    
    for(int i=1;i<nums.size();i++) {
        int cur = nums[i];
        int j=i-1;
        while(j>=0 && nums[j]>cur) {
            nums[j+1] = nums[j];
            j--;
        }
        nums[j+1] = cur;
    }

    for(auto n : nums) cout << n << " ";

    return 0;
}