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

vi count_of_1_bits(30,0);

void count_number_of_1_bit_in_a_number(int n) {
    for(int i=0;i<30;i++) {
        if(((n>>i)&1) == 1) {
            count_of_1_bits[i]++;
        }
    }
}

void reset_count_of_1_bits() {
    for(int i=0;i<30;i++) {
        count_of_1_bits[i]=0;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tc;
    cin >> tc;
    while(tc--) {
        int n;
        cin >> n;
        for(int i=1;i<=n;i++) {
            cin >> a[i];
            count_number_of_1_bit_in_a_number(a[i]);
        }

        for(int k=1;k<=n;k++) {
            bool ok = true;
            for(int i=0;i<30;i++) {
                if(count_of_1_bits[i]%k != 0) {
                    ok = false;
                }
            }
            if(ok) {
                cout << k << " ";
            }
        }
        cout << endl;
        reset_count_of_1_bits();
    }    
    

    

    return 0;
}