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
typedef vector<bool> vb;
typedef vector<pair<int,int> > vpii;

const ll MAX=1e18;

// Given n 
// find all the primes upto n
// n = 12
// primes = 2, 3, 5, 7, 11

const int SIZE = 1e6 + 9;
vb flag(SIZE);

// time complexity O(nlogn)
void sieve(int n) {
    flag[1] = true;
    for(int i=2;i*i<=n;i++) {
        if(flag[i]==false) {
            for(int j=i*i;j<=n;j+=i) {
                flag[j]=true;
            }
        }
    }

    vi primes;
    for(int i=1;i<=n;i++) {
        if(flag[i] == false) {
            primes.push_back(i);
        }
    }

    for(auto p : primes) cout << p <<  " ";
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    sieve(50);
    return 0;
}