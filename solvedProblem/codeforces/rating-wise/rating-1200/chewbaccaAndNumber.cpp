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
    
    long long int num;
    cin >> num;
    string ans = to_string(num);
    int ind=0;
    if(ans.front()=='9') {
        ind=1;
    }
    for(int i=ind;i<ans.length();i++) {
        if((ans[i]-'0')>4) {
            ans[i] = (9-(ans[i]-'0'))+'0';
        }
    }
    cout << ans << endl;
    return 0;
}
