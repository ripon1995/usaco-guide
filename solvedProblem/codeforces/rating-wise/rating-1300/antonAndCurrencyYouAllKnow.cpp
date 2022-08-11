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
    
    string line;
    getline(cin,line);
    vector<int> evenIndex;
    for(int i=0;i<line.length();i++) {
        int d = (line[i]-'0');
        if(d%2==0) {
            evenIndex.push_back(i);
        }
    }
    if(evenIndex.size()==0) {
        cout << "-1" << endl;
    }
    else {
        bool isSwapped = false;
        for(int i=0;i<evenIndex.size();i++) {
            if((line[evenIndex[i]]-'0') < (line.back()-'0')) {
                isSwapped = true;
                swap(line[evenIndex[i]],line.back());
                break;
            }
        }
        if(isSwapped == false) {
            swap(line.at(evenIndex.back()),line.back());
        }
        cout << line << endl;
    }
    return 0;
}
