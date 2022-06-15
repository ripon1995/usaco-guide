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
        int len;
        cin >> len;
        int d;
        pair<int,int>ans;
        pair<int,int>odd1;
        pair<int,int>odd2;
        int found = -1;
        int oddCount = 1;
        for(int i=1;i<=len;i++) {
            cin >> d;
            if(d%2==0) {
                found = 1;
                ans.first = 1;
                ans.second = i;
            }
            else {
                if(oddCount==1) {
                    odd1.first = 1;
                    odd1.second = i;
                    oddCount++; 
                }
                else if(oddCount==2) {
                    found = 2;
                    odd2.first = 1;
                    odd2.second = i;
                }
            }
        }
        if(found == 1) {
            cout << ans.first << endl;
            cout << ans.second << endl;
        }
        else if(found == 2) {
            cout << odd1.first + odd2.first << endl;
            cout << odd1.second << " " << odd2.second << endl;
        }
        else {
            cout << "-1" << endl;
        }
        
    }
    
    return 0;
}