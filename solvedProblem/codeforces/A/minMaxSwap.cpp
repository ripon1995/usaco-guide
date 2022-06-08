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
    string line;
    getline(cin,line);
    while(tc--) {
        int val;
        cin >> val;
        vi first(val);
        vi second(val);
        for(auto &f : first) {
            cin >> f;
        }
        for(auto &s : second) {
            cin >> s;
        }
        for(int i=0;i<first.size();i++) {
            if(first[i] >= second[i]) {
                continue;
            }
            swap(first[i],second[i]);
        }
        int maxFromFirst = *max_element(first.begin(),first.end());
        int maxFromSecond = *max_element(second.begin(),second.end());
        int result = maxFromFirst * maxFromSecond;
        cout << result << endl;
    }
    
    return 0;
}