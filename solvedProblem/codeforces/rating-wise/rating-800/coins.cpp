#include<iostream>
#include<vector>
#include<map>
#include<cmath>
#include<algorithm>
#include<stack>
#include<set>
#include<unordered_set>
using namespace std;

typedef vector<int>vi;
typedef vector<string>vs;
typedef map<int,vector<int> >mivi;
typedef pair<int,bool>pib;
typedef pair<int,int>pii;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,s;
    cin >> n >> s;
    
    int ans = 0;
    while(s>0) {
        if(n > s) {
            n = s;
        }
        ans += s/n;
        s = s%n;
        n--;
    }
    cout << ans << '\n';
    return 0;
}