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
vi query_count(N);
vll difference_array(N);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,k;
    cin >> n >> m >> k;

    for(int i=1;i<=n;i++) {
        cin >> nums[i];
    }

    vector<vi> query;
    for(int i=1;i<=m;i++) {
        int l,r,v;
        cin >> l >> r >> v;
        vi d;
        d.push_back(l);
        d.push_back(r);
        d.push_back(v);
        query.push_back(d);
    }

    for(int i=1;i<=k;i++) {
        int l,r;
        cin >> l >> r;
        query_count[l] += 1;
        query_count[r+1] -= 1;
    }

    for(int i=1;i<=m;i++) {
        query_count[i] += query_count[i-1];
    }

    for(int i=1;i<=n;i++) {
        difference_array[i] = nums[i] - nums[i-1];
    }

    for(int i=0;i<query.size();i++) {
        difference_array[query[i][0]] += 1LL * query_count[i+1] * query[i][2];
        difference_array[query[i][1]+1] -= 1LL * query_count[i+1] * query[i][2];
    }

    for(int i=1;i<=n;i++) {
        nums[i] = nums[i-1] + difference_array[i];
    }

    for(int i=1;i<=n;i++) {
        cout << nums[i] << " ";
    }
    
    return 0;
}