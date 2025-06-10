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
#include<unordered_set>
#include<climits>
#include<bitset>
using namespace std;

#define ll long long int
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<ll> vlli;
typedef vector<bool> vb;
typedef vector<pair<int,int> > vpii;

const int MOD = 1e9 + 7;
const ll MAX=1e18;
const int N = 5e6 + 9;

vi spf(N);
void spf_upto_n() {
    // set initial spf
    for(int i=1;i<N;i++) {
        spf[i] = i;
    }

    for(int i=2;i<N;i++) {
        for(int j=i;j<N;j+=i) {
            spf[j] = min(spf[j],i);
        }
    }
}


// time complexity : O(log(n))
vi phi(N);
void phi_upto_n() {
    for(int i=1;i<N;i++) {
        int n=i;
        int res = 1;
        while(n>1) {
            int p = spf[n];
            int e = 0;
            int pw = 1;
            while(n%p==0) {
                e++;
                pw *= p;
                n /= p;
            }
            res *= (pw/p) * (p-1);
            phi[i] = res;
        }
    }
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    spf_upto_n();
    phi_upto_n();
    
    for(int i=1;i<100;i++) {
        cout << phi[i] << endl;
    }

    return 0;
}
