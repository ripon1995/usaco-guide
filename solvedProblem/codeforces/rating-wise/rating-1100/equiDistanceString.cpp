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
    cin.tie(0);

    string first;
    string second;
    cin >> first >> second;
    string ans;
    vi ind;
    for(int i=0;i<first.length();i++) {
        if(first[i]==second[i]) { 
            ans.push_back(first[i]);
        }
        else {
            ans.push_back('0');
            ind.push_back(i);
        }
    }
    
    if(ind.size()!=0 && ind.size()%2==0) {
        int l = ind.size()/2;
        for(int i=0;i<l;i++) {
            ans[ind[i]] = first[ind[i]];
        }
        for(int i=l;i<ind.size();i++) {
            ans[ind[i]] = second[ind[i]];
        }
        cout << ans << endl;
    }
    else if(ind.size()==0) {
        cout << first << endl;
    }
    else {
        cout << "impossible" << endl;
    }

    return 0;
}
