#include<iostream>
#include<vector>
#include<stack>
using namespace std;

typedef vector<int>vi;
typedef vector<char>vc;

vector<pair<char,int> > getSegment(string dominoes) {
    vector<pair<char,int> > segments;
    for(int i=0;i<dominoes.length();i++) {
        if(dominoes[i]=='L' || dominoes[i]=='R') {
            segments.push_back(make_pair(dominoes[i],i));
        }
    }
    return segments;
}

int main() {
    string dominoes = ".L.R...LR..L..";

    dominoes.insert(dominoes.begin()+0,'L');
    dominoes.push_back('R');
    vector<pair<char,int> > segments = getSegment(dominoes);
    for(int i=1;i<segments.size();i++) {
        auto fs = segments[i-1];
        auto ss = segments[i];
        for(int j=fs.second+1 ;j<ss.second;j++) {
            if(dominoes[j]=='.' && fs.first == 'R' && ss.first == 'L') {
                
                int start = fs.second + 1;
                int end = ss.second - 1;
                while(start < end) {
                    dominoes[start++] = 'R';
                    dominoes[end--] = 'L';
                }
                j = ss.second;
            }
            else if(dominoes[j]=='.' && fs.first=='L' && ss.first=='L') {
                dominoes[j] = 'L';
            }
            else if(dominoes[j]=='.' && fs.first=='R' && ss.first=='R') {
                dominoes[j] = 'R';
            }
        }
    }
    dominoes.erase(dominoes.begin()+0);
    dominoes.pop_back();
    cout << dominoes << endl;
    return 0;
}