#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    cin>>num;
    long long sum = 0;
    int val;
    for(int i=1;i<num;i++) {
        cin >> val;
        sum += val;
    }
    long long formula = ((long long)num * (num+1)) / 2;
    cout << formula - sum << endl;
    return 0;
}