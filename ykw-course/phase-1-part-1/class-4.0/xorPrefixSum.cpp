#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main() {
    int n,q;
    cin >> n >> q;
    int nums[n+1];
    for(int i=1;i<=n;i++) {
        cin >> nums[i];
    }
    int xor_prefix[n+1];
    xor_prefix[0] = 0;
    for(int i=1;i<=n;i++) {
        xor_prefix[i] = xor_prefix[i-1] xor nums[i];
    }

    while(q--) {
        int l,r;
        cin >> l >> r;
        cout <<( xor_prefix[r] xor xor_prefix[l-1]) << '\n';
    }
    
    return 0;
}

/*
problem link : 
https://cses.fi/problemset/task/1650
*/