#include<vector>
#include<iostream>
#include<map>
#include<cmath>
#include<algorithm>
#include<stack>
#include<set>
#include<unordered_set>
#include<string>
using namespace std;

typedef vector<int>vi;
typedef vector<string>vs;
typedef map<int,vector<int> >mivi;
typedef pair<int,bool>pib;
typedef pair<int,int>pii;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin >> n >> m;
    int ans = INT_MIN;
    for(int i=0;i<n;i++) {
        vi data(m);
        for(auto &d : data) {
            cin >> d;
        }
        int minElement = *min_element(data.begin(),data.end());
        ans = max(ans,minElement);
    }
    cout << ans << endl;
    return 0;
}
