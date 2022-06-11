#include<iostream>
#include<vector>
#include<map>
#include<cmath>
#include<algorithm>
#include<stack>
#include<unordered_set>
using namespace std;

typedef vector<int>vi;
typedef map<int,vector<int> >mivi;
typedef pair<int,bool>pib;


int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc;
    cin >> tc;
    while(tc--) {
        int a,b;
        cin >> a >> b;
        int val = ceil((double)(a*b)/2);
        cout << val << endl; 
    }
    
    return 0;
}