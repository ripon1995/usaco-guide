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
using namespace std;

#define ll long long int

typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pair<int,int> > vpii;

const int N = 1e5 + 9;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    vi divisors;
    for(int i=1;i<=n;i++) {
        if(n%i==0) {
            divisors.push_back(i);
        }
    }

    for(auto d : divisors) {
        cout << d << " ";
    }
    
    return 0;
}