#include<iostream>
#include<vector>
#include<map>
#include<cmath>
using namespace std;

typedef vector<int>vi;
typedef map<int,vector<int> >mivi;
int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc;
    cin >> tc;
    while(tc--) {
        int a,b;
        cin >> a >> b;
        int val = min(max(a*2,b),max(a,b*2));
        cout << val*val << endl;
    }
    return 0;
}