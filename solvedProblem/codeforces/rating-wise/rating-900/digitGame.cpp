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
        string line;
        getline(cin,line);
        getline(cin,line);
        
        vi rage;
        vi breach;
        for(int i=0;i<line.length();i++) {
            int digit = line[i] - '0';
            if((i+1)%2 == 1) {
                rage.push_back(digit%2);
            }
            else {
                breach.push_back(digit%2);
            }
        }

        sort(rage.begin(),rage.end());
        reverse(rage.begin(),rage.end());
        sort(breach.begin(),breach.end());

        bool isRageTurn = true;
        while(len > 1) {
            if(isRageTurn) {
                rage.pop_back();
                isRageTurn = false;
            }
            else {
                breach.pop_back();
                isRageTurn = true;
            }
            len--;
        }
        int ans = 0;
        if(rage.size()!=0) {
            if(rage[0]==1) {
                ans = 1;
            }
            else {
                ans = 2;
            }
        }
        else if(breach.size()!=0) {
            if(breach[0]==1) {
                ans = 1;
            }
            else {
                ans = 2;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

