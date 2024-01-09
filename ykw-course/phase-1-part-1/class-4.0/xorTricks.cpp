#include<iostream>
#include<cmath>
#include<string>
using namespace std;

void get_unique_number() {
    int nums[5] = {1,9,2,9,1};
    int ans = 0;
    for(int i=0;i<5;i++) {
        ans = ans ^ nums[i];
    }
    cout << ans << endl;
}

void swap_number() {
    int a=5;
    int b=4;
    a ^= b;
    b ^= a;
    a ^= b;
    cout << a << " " << b << endl;
}

void get_duplicate_number() {
    int nums[6] = {1,2,3,4,3,5};
    int ans = 0;
    for(int i=1;i<=5;i++) {
        ans = ans^i;
    }

    for(int i=0;i<6;i++) {
        ans = ans^nums[i];
    }
    cout << ans << endl;
}

void get_missing_umber() {
    int nums[4] = {4,1,5,2};
    int ans = 0;
    for(int i=1;i<=5;i++) {
        ans = (ans ^ i);
    }

    for(int i=0;i<4;i++) {
        ans = ans ^ nums[i];
    }

    cout << ans << endl;
}

int main() {
    // get_unique_number();
    // swap_number();
    // get_duplicate_number();
    // get_missing_umber();
    // int ans = (1^2^3^4);
    // cout << ans << endl; 
    // ans = (ans^1^2^3^4^5);
    // cout << ans << endl;
    return 0;
}