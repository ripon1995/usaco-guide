#include<iostream>
#include<vector>
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

map<char,bool> init(int k) {
    map<char,bool>data;
    for(int i=65;i<(65+k);i++) {
        data[(char)i] = false;
    }

    return data;
}

char getValidChar(char left,char right,int k) {
    map<char,bool>data = init(k);
    data[left] = true;
    data[right] = true;
    for(const auto &d : data) {
        if(d.second == false) {
            return d.first;
        }
    }
}

pair<int,string> getAns(string line) {
    string ans1;
    int changedCount1 = 0;
    for(int i=0;i<line.size();i++) {
        if(i%2==0)ans1.push_back('A');
        else ans1.push_back('B');
        
        if(line[i]!=ans1.back()) changedCount1++;
    }
    string ans2;
    int changedCount2 = 0;    
    for(int i=0;i<line.size();i++) {
        if(i%2==0) ans2.push_back('B');
        else ans2.push_back('A');

        if(line[i]!=ans2.back()) changedCount2++;
    }

    return (changedCount1 < changedCount2) ? make_pair(changedCount1,ans1) : make_pair(changedCount2,ans2);
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,k;
    cin >> n >> k;
    string line;
    getline(cin,line);
    getline(cin,line);
    
    int replaceMent = 0;
    if(k==2) {
        pair<int,string>a = getAns(line);
        replaceMent = a.first;
        line = a.second;
    }
    else {
        for(int i=1;i<line.length();i++) {
            if(line[i-1]==line[i]) {
                replaceMent++;
                line[i] = getValidChar(line[i-1],line[i+1],k);
            }
        }
    }
    cout << replaceMent << '\n';
    cout << line << '\n';
    return 0;
}
