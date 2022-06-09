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

bool cmp(pii a,pii b) {
    return a.first < b.first;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc;
    cin >> tc;
    while(tc--) {
        int val,ram;
        cin >> val >> ram;
        vector<pair<int,int> >vpii(val);
        for(auto &v : vpii) {
            cin >> v.first;
            make_pair(v.first,0);
        }

        for(auto &v : vpii) {
            cin >> v.second;
            make_pair(v.first,v.second);
        }

        sort(vpii.begin(),vpii.end(),cmp);

        for(const auto v : vpii) {
            if(v.first > ram) {
                break;
            }
            
            ram += v.second;
        }
        cout << ram << endl;
    }    
    
    return 0;
}