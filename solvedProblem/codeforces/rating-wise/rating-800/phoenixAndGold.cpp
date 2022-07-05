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

    int tc;
    cin >> tc;
    while(tc--) {
        int sz,weightTobeAvoid;
        cin >> sz >> weightTobeAvoid;
        
        vi weight(sz);
        int totalWeight = 0;
        for(auto &w : weight) {
            cin >> w;
            totalWeight += w;
        }

        vi taken;
        vi notTaken;
        if(totalWeight == weightTobeAvoid) {
            cout << "NO" << endl;
        }
        else {
            totalWeight = 0;
            for(const auto &w : weight) {
                if((totalWeight+w)==weightTobeAvoid) {
                    notTaken.push_back(w);
                }
                else {
                    taken.push_back(w);
                    totalWeight += w;
                }
            }
            for(const auto &nt : notTaken) {
                taken.push_back(nt);
            }
            cout << "YES" << endl;
            for(const auto &t : taken) {
                cout << t << " ";
            }
            cout << endl;
        }
    }

    return 0;
}