#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int prefix_sum[n+1];
    prefix_sum[0] = 0;
    for(int i=1;i<=n;i++) {
        cin >> prefix_sum[i];
        prefix_sum[i] += prefix_sum[i-1];
    }
    int q;
    cin >> q;
    while(q--) {
        int l,r;
        cin >> l >> r;
        l++;
        r++;
        cout << prefix_sum[r] - prefix_sum[l-1] << endl;
    }
    return 0;
}

/*
problem link : https://www.spoj.com/problems/CSUMQ/
*/