#include<iostream>
#include<vector>
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
    cin.tie(0);

    int n;
    cin >> n;
    vi badges(n);
    for(auto &b : badges)  {
        cin >> b;
    }
    sort(badges.begin(),badges.end());
    int coinCount = 0;
    for(int i=1;i<badges.size();i++) {
        if(badges[i-1]>=badges[i]) {
            int next = badges[i-1] + 1;
            coinCount += abs(badges[i] - next);
            badges[i] = next;
        }
    }
    cout << coinCount << endl;
    return 0;
}
