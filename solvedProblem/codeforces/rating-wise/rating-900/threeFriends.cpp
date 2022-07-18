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
        vi pos(3);
        cin >> pos[0] >> pos[1] >> pos[2];
        sort(pos.begin(),pos.end());
        
        if(pos[0] != pos[1]) {
            pos[0]++;
        }
        else if(pos[0]==pos[1] && pos[2] != pos[1]) {
            pos[0]++;
            pos[1]++;
        }

        if(pos[1] != pos[2]) {
            pos[2]--;
        }
        else if(pos[1]==pos[2] && pos[1]!=pos[0]) {
            pos[1]--;
            pos[2]--;
        }

        long long dist = 0;

        for(int i=0;i<pos.size();i++) {
            for(int j=i+1;j<pos.size();j++) {
                dist += abs(pos[i]-pos[j]);
            }
        }
        cout << dist << '\n';
    }
    return 0;
}

