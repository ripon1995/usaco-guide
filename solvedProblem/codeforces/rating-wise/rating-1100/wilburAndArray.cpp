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
    vi ans;
    vi given(n);
    for(auto &g : given) {
        cin >> g;
    }

    long long turnCount = abs(given[0]);
    ans.push_back(given[0]);

    int i=1;
    while (i<given.size())
    {
        turnCount += abs(given[i]-ans.back());
        ans.push_back(given[i]);
        i++;
    }
    
    cout << turnCount << endl;

    return 0;
}
