#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;

int lcm(int a,int b) {
    return (a*b)/__algo_gcd(a,b);
}

int main() {
    int a,b;
    cin >> a >> b;
    cout << lcm(a,b) << endl;
    return 0;
}