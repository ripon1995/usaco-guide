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
        int sum;
        cin >> sum;
        vi ans;
        ans.push_back(1);
        sum--;
        while(sum > 0) {
            if(sum - ans.back() >= 2) {
                sum -= (ans.back()+2);
                ans.push_back(ans.back()+2);
            }

            else if(sum - ans.back() == 1) {
                sum -= (ans.back()+1);
                ans.push_back(ans.back()+1);
            }
            else if(sum - ans.back() == 0) {
                sum = 0;
                ans.push_back(ans.back());
            }
            else if(sum-ans.back() < 0) {
                ans.push_back(sum);
                sum = 0;
            }
        }

        cout << ans.size() << endl;
    }    
    
    return 0;
}