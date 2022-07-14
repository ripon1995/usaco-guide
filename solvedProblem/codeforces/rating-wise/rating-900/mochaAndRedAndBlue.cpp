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

string getStackToLine(stack<char>st) {
    string line;
    while(!st.empty()) {
        line.push_back(st.top());
        st.pop();
    }
    return line;
}

string fillTheBlanks(string line) {
    stack<char>st;
    for(const auto &l : line) {
        if(l=='?' && !st.empty()) {
            if(st.top()=='?') {
                st.push(l);
            }
            else {
                if(st.top()=='B') {
                    st.push('R');
                }
                else if(st.top()=='R') {
                    st.push('B');
                }
            }
        }
        else {
            st.push(l);
        }
    }
    string ans = getStackToLine(st);
    return ans;
}

bool isBlankOnly(string line) {
    for(const auto &l : line) {
        if(l=='R' || l=='B') {
            return false;
        }
    }
    return true;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int tc;
    cin >> tc;
    while(tc--) {
        int len;
        string line;
        cin >> len;
        getline(cin,line);
        getline(cin,line);
        if(isBlankOnly(line)==true) {
            line[0] = 'B';
        }
        string ans = fillTheBlanks(line);
        string finalAns = fillTheBlanks(ans);
        cout << finalAns << endl;
    }
    return 0;
}

