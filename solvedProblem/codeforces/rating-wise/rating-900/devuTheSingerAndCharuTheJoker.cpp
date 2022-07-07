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
    
        int numOfSongs,totalTime;
        cin >> numOfSongs >> totalTime;
        vi times(numOfSongs);
        for(auto &t : times) cin >> t;

        int requiredTime = 0;
        for(const auto &t : times) {
            requiredTime += t;
        }
        
        if((requiredTime + (10*(numOfSongs-1))) > totalTime) {
            cout << "-1" << endl;
        }
        else {
            cout << (totalTime-requiredTime)/5 << endl;
        }
        
    return 0;
}