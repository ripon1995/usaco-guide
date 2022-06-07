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
typedef map<int,vector<int> >mivi;
typedef pair<int,bool>pib;


int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc;
    cin >> tc;
    while(tc--) {
        int val;
        cin >> val;
        vi data(val);
        int minValue = INT_MAX;
        for(auto& d : data) {
            cin >> d;
            minValue = min(minValue,d);
        }
        int count = 0;
        for(const auto & d : data) {
            if(d == minValue) {
                count++;
            }
        }
        cout << data.size() - count << endl;
    }
    
    return 0;
}