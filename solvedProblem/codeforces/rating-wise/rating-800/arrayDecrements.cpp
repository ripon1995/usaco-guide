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

void patternCount(string line) {
    int i=line.find("OMG");
    while(i != line.npos) {
        cout << "Index: " << i << endl;
        i = line.find("OMG",i+1);
    }
}



int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc;
    cin >> tc;
    while(tc--) {
        int len;
        cin >> len;
        vi present(len);
        vi target(len);
        for(auto &p : present) cin >> p;
        for(auto &t : target) cin >> t;

        vi diff(len);
        for(int i=0;i<len;i++) {
            diff[i] = present[i] - target[i];
        }
        int minElement = *min_element(diff.begin(),diff.end());
        int maxElement = *max_element(diff.begin(),diff.end());

        bool ans = true;
        if(minElement < 0) {
            ans = false;
        }
        else {
            for(int i=0;i<len;i++) {
                int val = present[i] - maxElement;
                
                if(target[i]!=0 && val!=target[i]) {
                    ans = false;
                }
            }
        }
        cout << (ans ? "YES" : "NO") << endl;
    }
    return 0;
}