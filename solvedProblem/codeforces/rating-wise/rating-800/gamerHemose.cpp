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

    int tc;
    cin >> tc;
    while(tc--) {
        int n,h;
        cin >> n >> h;
        vi weapons(n);
        for(auto &w : weapons) {
            cin >> w;
        }
        sort(weapons.begin(),weapons.end());
        int w1 = weapons.back();
        weapons.pop_back();
        int w2 = weapons.back();
        int w = w1+w2;
        int ans = (h/w) * 2;
        if(h%w==0) {
            ans +=0;
        }
        else if(h%w <= w1) {
            ans++;
        }
        else {
            ans +=2;
        }
        cout << ans << endl;
        
    }
    
    return 0;
}