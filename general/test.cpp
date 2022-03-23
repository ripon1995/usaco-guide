#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    cin>>num;
    cout << num <<" ";
    while(num>1) {
        if(num%2 == 0) {
            num/=2;
        }
        else {
            num = (3*num)+1;
        }
        cout << num <<" ";
    }
    return 0;
}