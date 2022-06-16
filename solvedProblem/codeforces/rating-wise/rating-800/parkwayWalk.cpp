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
        int benches,energy;
        cin >> benches >> energy;
        int totalEnergyNeeded = 0;
        int e;
        for(int i=0;i<benches;i++) {
            cin >> e;
            totalEnergyNeeded += e;
        }
        cout << (energy>=totalEnergyNeeded ? 0 : abs(totalEnergyNeeded-energy)) << endl;
    }
    return 0;
}