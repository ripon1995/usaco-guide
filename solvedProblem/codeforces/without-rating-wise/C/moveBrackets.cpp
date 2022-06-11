#include<iostream>
#include<vector>
#include<map>
#include<cmath>
#include<algorithm>
#include<stack>
using namespace std;

typedef vector<int>vi;
typedef map<int,vector<int> >mivi;
typedef pair<int,bool>pib;


int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    int tc;
    cin >> tc;
    while(tc--) {
        int len;
        cin >> len;
        string line;
        getline(cin,line);
        getline(cin,line);
    
        stack<char>openingStack;
        int unstackedBracket = 0;
        for(int i=0;i<line.length();i++) {
            if(openingStack.empty() && line.at(i)==')') {
                unstackedBracket++;
            }
            else if(line.at(i)=='(') {
                openingStack.push(line.at(i));
            }
            else if(openingStack.empty()==false && line.at(i)==')') {
                openingStack.pop();
            }
        }

        cout << unstackedBracket << endl;
    }
    
    return 0;
}