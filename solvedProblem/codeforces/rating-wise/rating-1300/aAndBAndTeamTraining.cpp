#include<vector>
#include<iostream>
#include<map>
#include<cmath>
#include<algorithm>
#include<stack>
#include<set>
#include<unordered_set>
#include<string>
using namespace std;

typedef vector<int>vi;
typedef vector<string>vs;
typedef map<int,vector<int> >mivi;
typedef pair<int,bool>pib;
typedef pair<int,int>pii;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int e,n;
    cin >> e >> n;
    int teamCount = 0;
    while(e>0 && n>0 && e+n>=3) {
        if(e>n) {
            e-=2;
            n-=1;
        }
        else {
            n-=2;
            e-=1;
        }
        teamCount++;
    }
    
    cout << teamCount << endl;
    return 0;
}
