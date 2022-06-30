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
        int buns,beef,chickens;
        int beefPrice,chickenPrice;
        cin >> buns >> beef >> chickens;
        cin >> beefPrice >> chickenPrice;

        int hamburger=0,chickenBurger=0;
        if(beefPrice > chickenPrice) {
            //calculating beef
            if(buns >= 2*beef) {
                buns -= 2*beef;
                hamburger = beef;
            }
            else {
                hamburger = buns/2;
                buns = 0;
            }
            // calculating chickens
            (buns >= 2*chickens) ? chickenBurger = chickens : chickenBurger = buns/2;
        }
        else {
            //calculating chickens
            if(buns >= 2*chickens) {
                buns -= 2*chickens;
                chickenBurger = chickens;
            }
            else {
                chickenBurger = buns/2;
                buns = 0;
            }
            // calculating beef
            (buns >= 2*beef) ? hamburger = beef : hamburger = buns/2;
        }
        int profit = hamburger*beefPrice + chickenBurger*chickenPrice;
        cout << profit << '\n';
    }

    return 0;
}