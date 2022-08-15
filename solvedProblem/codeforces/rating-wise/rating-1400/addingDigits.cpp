#include<bits/stdc++.h>
using namespace std;

typedef vector<int>vi;
typedef vector<string>vs;
typedef map<int,int> mii;
typedef map<string,int> msi;
typedef map<string,string>mss;
typedef map<int,pair<int,int>> mipii;
typedef map<int,vector<int>> mivi;
typedef pair<string,int>psi;
typedef set<string>ss;


int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int a,b,n;
    cin >> a >> b >> n;
    string numToString = to_string(a);
    bool isFound = false;
    for(int i=0;i<10;i++) {
        numToString += i + '0';
        int num = stoi(numToString);
        if(num % b == 0) {
            isFound = true;
            break;
        }
        numToString.pop_back();
    }

    if(isFound==false) {
        cout << "-1" << endl;
    }
    else {
        for(int i=2;i<=n;i++) {
            numToString.push_back('0');
        }
        cout << numToString << endl;
    }

    return 0;
}