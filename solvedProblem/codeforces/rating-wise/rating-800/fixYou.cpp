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
        int row,col;
        cin >> row >> col;
        vs grid(row);
        for(auto &g : grid) {
            cin >> g;
        }
        int changesCount = 0,i=0,j=0;
        for(const auto &g : grid) {
            if(g.back()=='R') {
                changesCount++;
            }
        }
        for(const auto &g : grid.back()) {
            if(g == 'D') {
                changesCount++;
            }
        }
        cout << changesCount << '\n';
    }
    
    return 0;
}