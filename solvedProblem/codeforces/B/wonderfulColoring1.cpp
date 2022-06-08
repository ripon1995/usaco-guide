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


int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc;
    cin >> tc;
    string line;
    getline(cin,line);
    while(tc--) {
        getline(cin,line);
        map<char,int>frequency;
        for(const auto &l : line) {
            frequency[l]++;
        }
        int uniqueCharCount = 0;
        for(auto &f : frequency) {
            if(f.second != 1) {
                continue;
            }
            uniqueCharCount++;
        }

        int redColor = 0;
        redColor += uniqueCharCount/2;

        for(auto &f : frequency) {
            if(f.second == 1) {
                continue;
            }
            redColor++;
        }

        cout << redColor << endl;
    }
    
    return 0;
}