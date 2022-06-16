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

void patternCount(string line) {
    int i=line.find("OMG");
    while(i != line.npos) {
        cout << "Index: " << i << endl;
        i = line.find("OMG",i+1);
    }
}



int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int group;
    cin >> group;
    while(group--) {
        int len;
        cin >> len;
        string line;
        getline(cin,line);
        getline(cin,line);
        line.push_back('A');
        vi index;
        int ind = line.find('A');
        while(ind != line.npos) {
            index.push_back(ind);
            ind = line.find('A',ind+1);
        }
        int ans = 0;
        for(int i=1;i<index.size();i++) {
            if(index[i] - index[i-1] == 1) {
                continue;
            }
            ans = max(ans,(index[i]-index[i-1]));
        }
        cout << (ans==0 ? 0 : ans-1) << endl;
    }
    return 0;
}