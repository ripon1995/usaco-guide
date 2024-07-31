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
vll nums(N);

struct {
    multiset<ll>st;

    void add(ll x) {
        st.insert(x);
    }

    void remove(ll x) {
        st.erase(st.find(x));
    }

    ll get_min() {
        return *st.begin();
    }

    ll get_max() {
        return *(--st.end());
    }

    ll get_difference() {
        return get_max() - get_min();
    }

}ds;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    ll k;
    cin >> n >> k;

    for(int i=1;i<=n;i++) {
        cin >> nums[i];
    }

    int r=1;
    ll ans = 0;
    for(int l=1;l<=n;l++) {
        while(r<=n) {
            ds.add(nums[r]);
            if(ds.get_difference()>k) {
                ds.remove(nums[r]);
                break;
            }
            r++;
        }
        ans += r - l;

        ds.remove(nums[l]);
    }
    
    cout << ans << '\n';
    
    return 0;
}