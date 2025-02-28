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
// find the sum of divisor of n
// n = 12
// divisors = 1, 2, 3, 4, 6, 12
// sum of divisor = 28

// time complexity => O(sqrt(n))
void sum_of_divisor(int n) {
    // step -1 : find the divisors
    vi divisors;
    for(int i=1;i*i<=n;i++) {
        if(n%i==0) {
            divisors.push_back(i);
            if(i != n/i) {
                divisors.push_back(n/i);
            }
        }
    }

    // step-2 : sum all the divisor
    int sum = 0;
    for(auto d : divisors) sum += d;
    cout << sum << endl;
}

// time complexity => O(sqrt(n))
void sum_of_divisor_using_prime_factors(int n) {
    // step-1 : get all the prime divisors/factors
    vi prime_divisors;
    for(int i=2;i*i<=n;i++) { // O(sqrt(n))
        if(n%i == 0) {
            while(n%i==0) { // almost O(1)
                prime_divisors.push_back(i);
                n /= i;
            }
        }
    }
    if(n > 1) prime_divisors.push_back(n);

    // step-2 : get count of the divisors;
    map<int,int> mp;
    for(auto d : prime_divisors) {
        mp[d]++;
    }

    // step-3 : get the sum using formula
    int sum_of_divisors = 1;
    for(auto m : mp) {
        sum_of_divisors *= ((pow(m.first,(m.second+1)) - 1)/(m.first-1));
    }
    cout << sum_of_divisors << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    sum_of_divisor(12);
    sum_of_divisor_using_prime_factors(12);
    return 0;
}