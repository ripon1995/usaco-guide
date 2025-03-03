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
// find divisor_sum for each upto n
// n = 12
// divisor of 1 => (1) => sum = 1
// divisor of 2 => (1, 2) => sum = 3
// divisor of 3 => (1, 3) => sum = 4
// divisor of 4 => (1, 2, 4) => sum = 7
// divisor of 5 => (1, 5) => sum = 6
// .....
// divisor count of 12=> 6 (1, 2, 3, 4, 6, 12) => sum = 28


// time complexity => O(nlogn)
void find_divisor_sum_upto_n(int n) {
    vi divisor_count(n,0);
    for(int i=1;i<=n;i++) {
        for(int j=i;j<=n;j+=i) {
            divisor_count[j] += i;
        }
    }

    for(int i=1;i<=n;i++) cout << divisor_count[i] << " ";
}



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    find_divisor_sum_upto_n(12);
    return 0;
}