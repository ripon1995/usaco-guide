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
    
    for(int i=0;i<nums.size()-1;i++) {
        int min_index = i;
        for(int j=i+1;j<nums.size();j++) {
            if(nums[j] < nums[min_index]) {
                min_index = j;
            }
        }

        swap(nums[i],nums[min_index]);
    }

    for(auto n : nums) cout << n << " ";

    return 0;
}