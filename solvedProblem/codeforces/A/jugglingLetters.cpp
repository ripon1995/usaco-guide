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


int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc;
    cin >> tc;
    while(tc--) {
        int val;
        cin >> val;
        vs lines(val);
        for(auto &l : lines) {
            cin >> l;
        }
        map<char,int>data;
        for(const auto &line : lines) {
            for(const auto &l : line) {
                data[l]++;
            }
        }

        bool isPossible = true;
        for(const auto &d : data) {
            if(d.second%val != 0) {
                isPossible = false;
                break;
            }
        }
        (isPossible == true) ? cout << "YES" : cout << "NO";
        cout << endl;
    }
    
    return 0;
}