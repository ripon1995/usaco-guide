#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<vector>
#include<iomanip>
#include<set>
using namespace std;

// Problem: Given a sorted array a of n integers 
// where each element is either 0 or 1. Find the index of the first in the array. 
// If there is 1 present in the array, output 1 otherwise -1.

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

int first_index = -1;

void binary_search_iterative(int l, int r, int x, vector<int>nums) {
    while(l<=r) {
        int mid = (l + r)/2;
        if(nums[mid]==x) {
            first_index = mid;
            r = mid-1;
        }
        else if(x<nums[mid]) {
            r = mid-1;
        }
        else {
            l = mid+1;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums;
    nums.push_back(0);
    nums.push_back(0);
    nums.push_back(0);
    nums.push_back(0);
    nums.push_back(0);
    nums.push_back(0);
    nums.push_back(0);
    nums.push_back(0);
    nums.push_back(0);
    nums.push_back(0);
    
    binary_search_iterative(0,nums.size()-1,1,nums);
    cout << first_index << endl;
    return 0;
}