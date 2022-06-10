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
        int ind = 0;
        for(auto &l : line) {
            if(ind%2==0) {
                l = (l=='a'? 'b':'a');
            }
            else {
                l = (l=='z'? 'y':'z');
            }
            ind++;
        }
        cout << line << '\n';
    }
    
    return 0;
}