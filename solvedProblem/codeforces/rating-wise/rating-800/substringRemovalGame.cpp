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
    string line;
    getline(cin,line);
    while(tc--) {
        getline(cin,line);
        vector<int>ind;
        ind.push_back(0);
        for(int i=1;i<line.length();i++) {
            if(line[i-1] == line[i]) {
                int prev = ind.back();
                ind.push_back(prev);
            }
            else {
                ind.push_back(i);
            }
        }
        map<int,int>oneCount;
        for(int i=0;i<line.size();i++) {
            if(line[i]=='0') {
                continue;
            }
            oneCount[ind[i]]++;
        }
        vector<int>one;
        for(auto o : oneCount) {
            one.push_back(o.second);
        }
        sort(one.begin(),one.end());
        reverse(one.begin(),one.end());
        int ans = 0;
        for(int i=0;i<one.size();i++) {
            if(i%2==0) {
                ans += one[i];
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}