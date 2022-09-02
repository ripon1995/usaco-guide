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
    cin.tie(nullptr);

    string a,b;
    cin >> a >> b;
    int indexOfFour = 0;
    int indexOfSeven = 0;
    for(int i=0;i<a.length();i++) {
        if(a[i]!=b[i]) {
            if(a[i]=='4') {
                indexOfFour++;
            }
            else {
                indexOfSeven++;
            }
        }
    }
    int haveToSwap = min(indexOfFour,indexOfSeven);
    indexOfFour -= haveToSwap;
    indexOfSeven -= haveToSwap;
    int haveToReplace = max(indexOfFour,indexOfSeven);
    int ans = haveToSwap + haveToReplace;
    cout << ans << endl;
    return 0;
}
