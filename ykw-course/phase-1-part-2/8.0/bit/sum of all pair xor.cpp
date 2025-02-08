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

const int N = 1e6 + 9;
vi a(N);

vi count_of_1_bits(5,0);
vi count_of_0_bits(5,0);

void count_number_of_0_1_bit_in_a_number(int n) {
    for(int i=0;i<5;i++) {
        if(((n>>i)&1) == 1) {
            count_of_1_bits[i]++;
        }
        else {
            count_of_0_bits[i]++;
        }
    }
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i=1;i<=n;i++) {
        cin >> a[i];
        count_number_of_0_1_bit_in_a_number(a[i]);
    }

    int ans = 0;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            ans += a[i] ^ a[j];
        }
    }
    cout << ans << endl;

    ans = 0;
    for(int i=0;i<5;i++) {
        ans += 2 * count_of_0_bits[i] * count_of_1_bits[i] * (1 << i);
    }
    cout << ans << endl;
    
    return 0;
}