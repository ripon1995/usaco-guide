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

bool isSorted(vi data) {
    for(int i=1;i<data.size();i++) {
        if(data[i] < data[i-1]) {
            return false;
        }
    }
    return true;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int tc;
    cin >> tc;
    while(tc--) {
        int len;
        cin >> len;
        vi data(len);
        for(auto &d : data) cin >> d;
        
        int minOperation = 0;
        if(isSorted(data)) {
            minOperation = 0;
        }
        else {
            if(data.front()==1 || data.back()==len) {
                minOperation = 1;
            }
            else if(data.front()==len && data.back()==1) {
                minOperation = 3;
            }
            else {
                minOperation = 2;
            }
        }
        cout << minOperation << endl;
    }

    return 0;
}