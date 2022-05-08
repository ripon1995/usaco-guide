#include<bits/stdc++.h>
using namespace std;

typedef vector<int>vi;
typedef map<int,int> mii;
typedef map<string,int> msi;
typedef map<string,string>mss;
typedef map<int,pair<int,int>> mipii;
typedef map<int,vector<int>> mivi;
typedef pair<string,int>psi;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int inp;
    cin >> inp;
    string k,v;
    getline(cin,k);
    mss slogan;
    for(int i=1;i<=inp;i++) {
        getline(cin,k);
        getline(cin,v);
        slogan[k] = v;
    }
    string line;
    int out;
    cin >> out;
    getline(cin,line);
    for(int i=1;i<=out;i++) {
        getline(cin,line);
        cout << slogan[line] << endl;
    }

    return 0;
}
