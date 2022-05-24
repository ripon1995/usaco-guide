#include<bits/stdc++.h>
using namespace std;

typedef vector<int>vi;
typedef map<string,int> msi;
typedef map<string,string>mss;
typedef unordered_map<int,int>umii;
typedef map<int,pair<int,int>> mipii;

int getSpacePosition(string str) {
    for(int i=0;i<str.length();i++) {
        if(isspace(str[i])) {
            return i;
        }
    }
    return -1;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    string str;
    mss dictonary;
    
    while(getline(cin,str)) {
        if(str.length()==0) {
            break;
        }
        int ind = getSpacePosition(str);
        string eWord = str.substr(0,ind);
        string oWord = str.substr(ind+1);
        dictonary[oWord] = eWord;
    }

    while(cin >> str) {
        if(dictonary.count(str)==0) {
            cout << "eh" << endl;
        }
        else {
            cout << dictonary[str] << endl;
        }
    }
    return 0;
}
