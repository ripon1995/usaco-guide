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

long long int getDistance(int a,int b) {
    return abs(a-b);
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc;
    cin >> tc;
    while(tc--) {
        int len;
        cin >> len;
        vi piranha(len);
        for(auto &p : piranha) cin >> p;
        int maxPiranha = *max_element(piranha.begin(),piranha.end());
        int minPiranha = *min_element(piranha.begin(),piranha.end());
        int index = -1;
        if(maxPiranha != minPiranha) {
            for(int i=0;i<piranha.size();i++) {
                if(piranha[i] != maxPiranha) continue;

                if(i==0) {
                    if(piranha[i+1] < piranha[i]) {
                        index = i;
                        break;
                    }
                }
                else if(i==piranha.size()-1) {
                    if(piranha[i-1] < piranha[i]) {
                        index = i;
                        break;
                    }
                }
                else {
                    if(piranha[i-1] < piranha[i]) {
                        index = i;
                        break;
                    }
                    else if(piranha[i+1] < piranha[i]) {
                        index = i;
                        break;
                    }
                }
            }
        }
        cout << ((index == -1) ? index : index+1) << '\n';
    }
    return 0;
}