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


int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    
    string line;
    getline(cin,line);

    int firstZeroIndex = line.find('0');
    int firstOneIndex = line.find('1');

    if(firstZeroIndex != line.npos) {
        line.erase(line.begin()+firstZeroIndex);
    }
    else if(firstZeroIndex==line.npos) {
        line.pop_back();
    }
    cout << line << endl;
    return 0;
}

