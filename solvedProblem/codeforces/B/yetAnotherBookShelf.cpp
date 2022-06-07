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
        
        for(auto& d : data) {
            cin >> d;
        }
        while(data.front() == 0) {
            data.erase(data.begin()+0);
        }
        while(data.back()==0) {
            data.pop_back();
        }
        int totalZero = 0;
        totalZero = count(data.begin(),data.end(),0);
        cout << totalZero << endl;
    }
    
    return 0;
}