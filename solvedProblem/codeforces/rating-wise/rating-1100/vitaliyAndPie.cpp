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
    cin.tie(0);

    int n;
    cin >> n;
    string line;
    getline(cin,line);
    getline(cin,line);
    map<char,int>key;
    key[line.front()]++;
    int totalCost = 0;
    for(int i=1;i<line.length();i++) {
        if(i%2 == 0) {
            key[line[i]]++;
        }
        else {
            char needKey = tolower(line[i]);
            if(key.count(needKey) && key[needKey]>0) {
                key[needKey]--;
            }
            else {
                totalCost++;
            }
        }
    }
    cout << totalCost << endl;
    return 0;
}
