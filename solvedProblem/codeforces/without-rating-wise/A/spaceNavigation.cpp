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
    string line;
    int x,y;
    while(tc--) {
        cin >> x >> y;
        getline(cin,line);
        getline(cin,line);
        int startX = 0;
        int startY = 0;
        for(const auto &l : line) {
            
            if(l == 'L' || l =='R') {
                if(x>startX && l=='R') {
                    startX++;
                }
                else if(x < startX && l == 'L') {
                    startX--;
                }
            }
            else if(l == 'U' || l == 'D') {
                if(y>startY && l == 'U') {
                    startY++;
                }
                else if(y<startY && l == 'D') {
                    startY--;
                }
            }
            
        }
        if(x==startX && y==startY) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}