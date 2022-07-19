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

bool isPossible(string line,string ss,int firstIndex,int lastIndex) {
    char first = ss.front();
    for(int i=0;i<firstIndex;i++) {
        if(line[i]==first) {
            return true;
        }
    }

    char last = ss.back();
    for(int i=lastIndex+1;i<line.length();i++) {
        if(line[i]==last) {
            return true;
        }
    }
    return false;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int tc;
    cin >> tc;
    while(tc--) {
        int len,query;
        cin >> len >> query;
        string line;
        getline(cin,line);
        getline(cin,line);

        int l,r;
        while(query--) {
            cin >> l >> r;
            string ss = line.substr(l-1,(r-l+1));
            bool ans = isPossible(line,ss,l-1,(r-1));
            if(ans == true) {
                cout << "YES" << '\n';
            }
            else {
                cout << "NO" << '\n';
            }
        }
    }
    return 0;
}

