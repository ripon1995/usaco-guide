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
        int len,x;
        cin >> len >> x;
        long long minBeauty = 0,maxBeauty = 0;
        int val;
        for(int i=0;i<len;i++) {
            cin >> val;
            minBeauty += val;
            maxBeauty += ceil((double)val/x);
        }
        minBeauty = ceil((double)minBeauty/x);
        cout << minBeauty << " " << maxBeauty << endl;

    }

    return 0;
}