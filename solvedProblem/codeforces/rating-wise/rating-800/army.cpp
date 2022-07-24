#include<iostream>
#include<vector>
#include<map>
#include<cmath>
#include<algorithm>
#include<stack>
#include<set>
#include<unordered_set>
#include<string>
using namespace std;

typedef vector<int>vi;
typedef vector<string>vs;
typedef map<int,vector<int> >mivi;
typedef pair<int,bool>pib;
typedef pair<int,int>pii;


int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    vi rank(n-1);
    for(auto &r : rank) {
        cin >> r;
    }
    int a,b;
    cin >> a >> b;
    a--;
    b--;
    int ans = 0;
    for(int i=a;i<b;i++) {
        ans += rank[i];
    }
    cout << ans << '\n';

    return 0;
}

