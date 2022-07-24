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

map<char,int> initMap() {
    map<char,int>mp;
    for(int i=97;i<=104;i++) {
        mp[(char)i] = i-96;
    }
    mp['1'] = 8;
    mp['2'] = 7;
    mp['3'] = 6;
    mp['4'] = 5;
    mp['5'] = 4;
    mp['6'] = 3;
    mp['7'] = 2;
    mp['8'] = 1;
    
    return mp;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    
    map<char,int>data = initMap();
    string present,target;
    cin >> present >> target;
    int presentX = data[present[0]];
    int presentY = data[present[1]];

    int targetX = data[target[0]];
    int targetY = data[target[1]];

    vector<string> ans;
    while(presentX!=targetX || presentY!=targetY) {
        if(presentX<targetX && presentY<targetY) {
            presentX++;
            presentY++;
            ans.push_back("RD");
        }
        else if(presentX>targetX && presentY>targetY) {
            presentX--;
            presentY--;
            ans.push_back("LU");
        }
        else if(presentX<targetX && presentY>targetY) {
            presentX++;
            presentY--;
            ans.push_back("RU");
        }
        else if(presentX>targetX && presentY<targetY) {
            presentX--;
            presentY++;
            ans.push_back("LD");
        }
        else if(presentX==targetX && presentY<targetY) {
            presentY++;
            ans.push_back("D");
        }
        else if(presentX==targetX && presentY>targetY) {
            presentY--;
            ans.push_back("U");
        }
        else if(presentX<targetX && presentY==targetY) {
            presentX++;
            ans.push_back("R");
        }
        else if(presentX>targetX && presentY==targetY) {
            presentX--;
            ans.push_back("L");
        }
    }
    cout << ans.size() << endl;
    for(auto a : ans) {
        cout << a << endl;
    }

    return 0;
}

