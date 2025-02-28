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
// Find the divisors of n
// n = 12
// divisors = 1 2 3 4 6 12



// time complexity => O(n)
void find_divisors_brute_force(int n) {
    vi divisors;
    for(int i=1;i<=n;i++) {
        if(n%i == 0) {
            divisors.push_back(i);
        }
    }

    for(auto d : divisors) cout << d << " ";
    cout << endl;
}

// time complexity => O(sqrt(n))
void find_divisors(int n) {
    vi divisors;
    for(int i=1;i*i<=n;i++) {
        if(n%i==0) {
            divisors.push_back(i);
            if(i != n/i) {
                divisors.push_back(n/i);
            }
        }
    }
    sort(divisors.begin(), divisors.end());
    for(auto d : divisors) cout << d << " ";
    cout << endl;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    find_divisors_brute_force(12);
    find_divisors(12);

    return 0;
}