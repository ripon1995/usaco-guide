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

int difference(string a,string b) {
    int dif = 0;
    for(int i=0;i<a.length();i++) {
        dif += abs((int)a[i] - (int)b[i]);
    }
    return dif;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc;
    cin >> tc;
    while(tc--) {
        int hitPoint,n,m;
        cin >> hitPoint >> n >> m;
        while(n && ((hitPoint/2)+10 < hitPoint)) {
            n--;
            hitPoint = (hitPoint/2)+10;
        }
        bool ans = true;
        if(hitPoint > m*10) {
            ans = false;
        }
        cout << (ans==true ? "YES" : "NO") << '\n';
    }
    return 0;
}