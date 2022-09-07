#include<vector>
#include<iostream>
#include<map>
#include<cmath>
#include<algorithm>
#include<stack>
#include<set>
#include<unordered_set>
#include<string>
using namespace std;

typedef vector<int>vi;
typedef vector<string>vs;
typedef map<int,vector<int> >mivi;
typedef pair<int,bool>pib;
typedef pair<int,int>pii;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int len;
    string line;
    cin >> len;
    getline(cin,line);
    getline(cin,line);

    string compressedLine;
    compressedLine.push_back(line.front());
    for(int i=1;i<line.length();i++) {
        if(compressedLine.back()==line[i]) {
            continue;
        }
        compressedLine.push_back(line[i]);
    }
    int ans = min(line.length(),compressedLine.length()+2);
    cout << ans << endl;
    return 0;
}
