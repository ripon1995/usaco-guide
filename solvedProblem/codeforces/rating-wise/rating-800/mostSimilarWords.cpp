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

int difference(string a,string b) {
    int dif = 0;
    for(int i=0;i<a.length();i++) {
        dif += abs((int)a[i] - (int)b[i]);
    }
    return dif;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc;
    cin >> tc;
    while(tc--) {
        int n,len;
        cin >> n >> len;
        vector<string>words(n);
        for(auto &w : words) cin >> w;

        sort(words.begin(),words.end());

        int minDif = INT_MAX;
        for(int i=0;i<words.size();i++) {
            for(int j=i+1;j<words.size();j++) {
                minDif = min(minDif,difference(words[i],words[j]));
            }
        }
        cout << minDif << endl;
    }

    return 0;
}