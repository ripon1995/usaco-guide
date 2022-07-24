#include<iostream>
#include<vector>
using namespace std;

int main() {
    string s,t;
    while(cin >> s >> t) {
        if(cin.eof()) break;

        vector<int>index;
        bool isFound = false;

        // finding the first char is in t or not
        for(int i=0;i<t.length();i++) {
            if(s[0]==t[i]) {
                index.push_back(i);
                isFound = true;
                break;
            }
        }

        if(isFound == true) {
            for(int i=1;i<s.length();i++) {
                int startIndex = index.back();
                isFound = false;
                for(int j=startIndex+1;j<t.length();j++) {
                    if(s[i]==t[j]) {
                        index.push_back(j);
                        isFound = true;
                        break;
                    }
                }
                if(isFound==false) {
                    break;
                }
            }
        }
        if(isFound==false) {
            cout << "No" << '\n';
        }
        else if(index.size()==s.length()) {
            cout << "Yes" << '\n';
        }
    }
    return 0;
}