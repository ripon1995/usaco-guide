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

bool isValid(string line) {
    sort(line.begin(),line.end());
    for(int i=0;i<line.length();i++) {
        char p = 'a' + i;
        if(p != line.at(i)) {
            return false;
        }
    }
    return true;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc;
    cin >> tc;
    string letters = "bcdefghijklmnopqrstuvwxyz";
    string line;
    getline(cin,line);
    while(tc--) {
        getline(cin,line);
        
        if(isValid(line) == false) {
            cout << "NO" << endl;
            continue;
        }
        bool ans = true;
        
        vector<pair<char,int> > res;
        int currentIndex = line.find('a');
        res.push_back(make_pair('a',currentIndex));

        for(auto l : letters) {
            int currentIndex = line.find(l);
            // this means line ends
            if(currentIndex == -1) {
                break;
            }

            if(abs(currentIndex-res.front().second)!=1 && (currentIndex-res.back().second)!=1) {
                ans = false;
                break;
            }

            if(currentIndex < res.front().second) {
                res.insert(res.begin()+0,make_pair(l,currentIndex));
            }
            else if(currentIndex > res.back().second) {
                res.push_back(make_pair(l,currentIndex));
            }
            
        }

        cout << (ans==true ? "YES" : "NO") << endl;
    }    
    
    return 0;
}