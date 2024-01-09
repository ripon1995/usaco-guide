#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int nums[n];
    for(int i=0;i<n;i++) {
        cin >> nums[i];
    }
    
    int suffix_sum[n+1];
    suffix_sum[n] = 0;
    for(int i=n-1;i>=0;i--) {
        suffix_sum[i] = suffix_sum[i+1] + nums[i];
    }
    int q;
    cin >> q;
    while(q--) {
        int l,r;
        cin >> l >> r;
        cout << suffix_sum[l] - suffix_sum[r+1] << endl;
    }
    return 0;
}

/*
problem link : https://www.spoj.com/problems/CSUMQ/
*/