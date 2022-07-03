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

    int len;
    cin >> len;

    string line;
    getline(cin,line);
    getline(cin,line);
    
    int countOne = count(line.begin(),line.end(),'1');
    int countZero = count(line.begin(),line.end(),'0');

    int minDeletion = min(countOne,countZero);
    int ans = 0;
    if(countOne != countZero) {
        ans = line.length() - (minDeletion*2);
    }

    cout << ans << endl;
    
    return 0;
}