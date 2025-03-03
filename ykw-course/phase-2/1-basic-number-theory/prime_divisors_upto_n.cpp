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
const int SIZE = 1e6 + 9;

/*
    Given 1e6 queries
    Need to find prime factorization of n where n<=1e6
*/

vi spf(SIZE);
// time complexity => O(nlogn)
void find_prime_factors_using_sieve_upto_n(int n) {
    
    // step - 1 : set the element iteself as spf initially
    for(int i=2;i<SIZE;i++) {
        spf[i] = i;
    }

    // step - 2 : get all the spf up to n
    for(int i=2;i<SIZE;i++) {
        for(int j=i;j<SIZE;j+=i) {
            spf[j] = min(spf[j],i);
        }
    }

}



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    find_prime_factors_using_sieve_upto_n(1e6);
    int q; cin >> q;
    while(q--) {
        int n; cin >> n;
        vi ans;
        while(n>1) {
            ans.push_back(spf[n]);
            n /= spf[n];
        }
        for(auto a : ans) cout << a << " ";
        cout << endl;
    }
    return 0;
}