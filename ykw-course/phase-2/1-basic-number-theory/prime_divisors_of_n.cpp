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
// Find the prime divisors/factors of n
// n = 12
// divisors = 1 2 3 4 6 12
// prime divisors/factors => 2 2 3


// time complexity => O(sqrt(n))
void find_prime_factors(int n) {
    vi prime_factors;
    for(int i=2;i*i<=n;i++) { // O(sqrt(n))
        if(n%i==0) {
            while(n%i==0) { // almost O(1)
                prime_factors.push_back(i);
                n /= i;
            }
        }
    }

    if(n>1) {
        prime_factors.push_back(n);
    }

    for(auto p : prime_factors) cout << p << " ";
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    find_prime_factors(120);

    return 0;
}