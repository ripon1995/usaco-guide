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
        int len;
        cin >> len;
        vi stacks(len);
        for(auto &s : stacks) cin >> s;
        long long int sum = 0,need = 0;
        bool isPossible = true;
        for(int i=0;i<stacks.size();i++) {
            sum += stacks[i];
            need += i;
            if(sum < need) {
                isPossible = false;
                break;
            }
        }
        cout << (isPossible ? "YES" : "NO") << endl;
    }
    return 0;
}