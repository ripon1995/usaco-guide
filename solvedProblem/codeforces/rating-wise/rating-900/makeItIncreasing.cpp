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


bool isStrictlyIncreasing(vi data) {
    for(int i=1;i<data.size();i++) {
        if(data[i] <= data[i-1]) {
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
        int totalOperation = 0;
        
        for(int i=data.size()-1;i>0;i--) {
            while(data[i-1] >= data[i]) {
                data[i-1] = floor(data[i-1]/2);
                totalOperation++;
                if(i!=0 && data[i-1]==0) {
                    break;
                }
            }
        }

        bool ans = isStrictlyIncreasing(data);
        cout << (ans ? totalOperation : -1) << endl;
    }
    return 0;
}

