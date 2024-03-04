#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<vector>
#include<iomanip>
#include<set>
using namespace std;

// recursive 
bool binary_search(int l, int r, int x, vector<int>nums) {
    if(l > r) return false; 
    int mid = (l + r)/2;
    if(nums[mid] == x) {
        return true;
    }

    else if(x > nums[mid]) {
        return binary_search(mid+1,r,x,nums);
    }
    else {
        return binary_search(l,mid-1,x,nums);
    }
}


// iterative
bool binary_search_iterative(int l, int r, int x, vector<int>nums) {
    while(l<=r) {
        int mid = (l + r)/2;
        if(nums[mid]==x) {
            return true;
        }
        else if(x<nums[mid]) {
            r = mid-1;
        }
        else {
            l = mid+1;
        }
    }

    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums;
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);
    nums.push_back(7);
    nums.push_back(8);
    nums.push_back(13);


    cout << boolalpha << binary_search(0,nums.size()-1,9,nums) << endl;
    cout << boolalpha << binary_search_iterative(0,nums.size()-1,9,nums) << endl;
    return 0;
}