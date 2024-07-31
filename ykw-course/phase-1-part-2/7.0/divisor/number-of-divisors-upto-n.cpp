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
vi number_of_divisors(N);

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i=1;i<=n;i++) {
        for(int j=i;j<=n;j+=i) {
            number_of_divisors[j]++;
        }
    }

    for(int i=1;i<=n;i++) {
        cout << "Divisor count of " << i << " : " << number_of_divisors[i] << endl;
    }
    
    return 0;
}