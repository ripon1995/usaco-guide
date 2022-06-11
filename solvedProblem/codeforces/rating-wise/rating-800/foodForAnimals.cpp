#include<bits/stdc++.h>
using namespace std;

typedef vector<int>vi;
typedef vector<string>vs;
typedef map<int,int> mii;
typedef map<string,int> msi;
typedef map<string,string>mss;
typedef map<int,pair<int,int>> mipii;
typedef map<int,vector<int>> mivi;
typedef pair<string,int>psi;
typedef set<string>ss;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int tc;
    cin >> tc;
    while(tc--) {
        int d,c,u,dog,cat;
        cin >> d >> c >> u >> dog >> cat;
        bool isPossible = true;
        if(dog > d) {
            if(dog > d+u) {
                isPossible = false;
            }
            u -= abs(dog - d);
        }
        if(cat > c && isPossible==true) {
            if(cat > c) {
                if(cat > c+u) {
                    isPossible = false;
                }
            }
        }

        cout << (isPossible ? "YES" : "NO" ) << endl;
    }
    return 0;
}