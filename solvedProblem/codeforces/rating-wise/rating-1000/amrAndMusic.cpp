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


bool cmp(pair<int,int>A,pair<int,int>B) {
    return A.first < B.first;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n,days;
    cin >> n >> days;
    vector<pair<int,int> >instruments;
    for(int i=0;i<n;i++) {
        int val;
        cin >> val;
        instruments.push_back(make_pair(val,i+1));
    }

    sort(instruments.begin(),instruments.end(),cmp);
    vi ans;
    for(int i=0;i<instruments.size();i++) {
        if(instruments[i].first <= days) {
            ans.push_back(instruments[i].second);
            days-=instruments[i].first;
        }
        else {
            break;
        }
    }
    cout << ans.size() << endl;
    for(auto a : ans) cout << a << " ";
    return 0;
}
