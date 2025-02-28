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
// find the number of divisor of n
// n = 12
// divisors = 1, 2, 3, 4, 6, 12
// number of divisor = 6


// time complexity => O(sqrt(n))
void number_of_divisor(int n) {
    vi divisors;
    for(int i=1;i*i<=n;i++) {
        if(n%i==0) {
            divisors.push_back(i);
            if(i != n/i) divisors.push_back(n/i);
        }
    }

    cout << divisors.size() << endl;
}


/*

12 = 2^2 * 3^1

so divisor count = (2+1) * (1+1)

*/

// time complexity => O(sqrt(n))
void number_of_divisors_using_prime_factors(int n) {
    map<int,int>divisors; // need to take the count of the divisors

    for(int i=2;i*i<=n;i++) {
        if(n%i==0) {
            while(n%i==0) {
                divisors[i]++;
                n /= i;
            }
        }
    }
    if(n > 1) {
        divisors[n]++;
    }

    // for(auto d : divisors) {
    //     cout << "Divisor : " << d.first << " Count : " << d.second << endl;
    // }

    int count_of_divisor = 1;
    for(auto d : divisors) {
        count_of_divisor *= (d.second + 1);
    }
    cout << count_of_divisor << endl;
}



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    number_of_divisor(12);
    number_of_divisors_using_prime_factors(12);
    return 0;
}