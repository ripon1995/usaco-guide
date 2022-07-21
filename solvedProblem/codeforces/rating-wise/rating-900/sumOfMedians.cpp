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
        int n,k;
        cin >> n >> k;
        vi data(n*k);
        for(auto &d : data) cin >> d;

        int targetIndex = ceil((double)n/2);
        vector<vector<int> > ans(k);
        if(targetIndex==1) {
            int start = 0;
            for(int i=0;i<k;i++) {
                while(ans[i].size()<n) {
                    ans[i].push_back(data[start]);
                    start++;
                }
            }
        }
        else {
            for(int i=0;i<k;i++) {
                for(int j=1;j<targetIndex;j++) {
                    ans[i].push_back(data.front());
                    data.erase(data.begin()+0);
                }
                for(int j=1;j<=(n-targetIndex+1);j++) {
                    ans[i].push_back(data.back());
                    data.pop_back();
                }

                sort(ans[i].begin(),ans[i].end());
            }    
        }
        long long sum = 0;
        for(int i=0;i<ans.size();i++) {
            sum += ans[i][targetIndex-1];
        }
        cout << sum << '\n';
    }
    return 0;
}

