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
#include<climits>
using namespace std;

#define ll long long int
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pair<int,int> > vpii;

const ll MAX=1e18;

// Given n 
// Find it is prime or not
// n = 12
// Not prime


// time complexity => O(n)
bool is_prime_brute_force(int n) {
    for(int i=2;i<n;i++) {
        if(n%i == 0) {
            return false;
        }
    }

    return true;
}


// time complexity => O(sqrt(n))
bool is_prime(int n) {
    for(int i=2;i*i<=n;i++) {
        if(n%i == 0) {
            return false;
        }
    }

    return true;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    if(is_prime(7)) {
        cout << "Prime" << endl;
    }

    return 0;
}