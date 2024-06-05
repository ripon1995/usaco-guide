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
typedef vector<int> vi;
 
const int N = 1e5 + 9;

vi merge(vi left,vi right) {
    vector<int>ans;
    int index_a = 0;
    int index_b = 0;
    while(index_a < left.size() and index_b < right.size()) {
        if(left[index_a] <= right[index_b]) {
            ans.push_back(left[index_a]);
            index_a++;
        }
        else {
            ans.push_back(right[index_b]);
            index_b++;
        }
    }

    while(index_a < left.size()) {
        ans.push_back(left[index_a]);
        index_a++;
    }

    while(index_b < right.size()) {
        ans.push_back(right[index_b]);
        index_b++;
    }
    return ans;
}

vi merge_sort(vi nums) {
    if(nums.size()<=1) {
        return nums;
    }

    int mid = nums.size()/2;
    vi left(nums.begin(),nums.begin()+mid);
    vi right(nums.begin()+mid,nums.end());

    return merge(merge_sort(left),merge_sort(right));
} 

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vi nums(n);
    for(int i=0;i<n;i++) {
        cin >> nums[i];
    }
    auto ans = merge_sort(nums);

    for(auto a : ans) {
        cout << a << " ";
    }

    return 0;
}