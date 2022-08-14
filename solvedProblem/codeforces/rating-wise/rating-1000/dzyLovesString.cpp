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

    string line;
    getline(cin,line);
    int val;
    cin >> val;
    vi letterValue(26);
    int maxPoint = INT_MIN;
    for(auto &l : letterValue) {
        cin >> l;
        maxPoint = max(maxPoint,l);
    }
    long long ans = 0;
    for(int i=0;i<line.length();i++) {
        char ch = line[i];
        int val = line[i] - 'a';
        ans += ((i+1) * letterValue[val]);
    }
    for(int i=line.length()+1;i<=(val+line.length());i++) {
        ans += (i*maxPoint);
    }
    cout << ans << endl;
    return 0;
}
