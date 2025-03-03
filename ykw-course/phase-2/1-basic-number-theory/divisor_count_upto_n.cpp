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
// find divisor count for each upto n
// n = 12
// divisor count of 1 => 1 (1)
// divisor count of 2 => 2 (1, 2)
// divisor count of 3 => 2 (1, 3)
// divisor count of 4 => 3 (1, 2, 4)
// divisor count of 5 => 2 (1, 5)
// .....
// divisor count of 12=> 6 (1, 2, 3, 4, 6, 12)


// time complexity => O(nlogn)
void find_divisor_count_upto_n(int n) {
    vi divisor_count(n,0);
    for(int i=1;i<=n;i++) {
        for(int j=i;j<=n;j+=i) {
            divisor_count[j]++;
        }
    }

    for(int i=1;i<=n;i++) cout << divisor_count[i] << " ";
}



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    find_divisor_count_upto_n(12);
    return 0;
}