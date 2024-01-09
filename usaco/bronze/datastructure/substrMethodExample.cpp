// ex
#include<bits/stdc++.h>
using namespace std;

string addSpacesBetweenEachWord(string s,vector<int>& spaces) {
    int pos = 0;
    string res ="";
    for(int i=0;i<spaces.size();i++) {
        res += s.substr(pos,spaces[i]-pos);
        res += " ";
        pos = spaces[i];
    }
    res += s.substr(pos);
    return res;
}

int main()
{
    vector<int> spaces = {8,13,15};
    string str = "leetcodehelpsmelearn";
    cout << addSpacesBetweenEachWord(str,spaces) << endl;
    return 0;
}