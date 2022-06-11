#include<bits/stdc++.h>
using namespace std;

typedef vector<int>vi;
typedef vector<string>vs;
typedef map<int,int> mii;
typedef map<string,int> msi;
typedef map<string,string>mss;
typedef map<int,pair<int,int>> mipii;
typedef map<int,vector<int>> mivi;
typedef pair<string,int>psi;
typedef set<string>ss;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int len;
    cin >> len;
    string file;
    getline(cin,file);
    getline(cin,file);
    
    vector<pair<char,int>> filename;
    for(int i=0;i<file.length();i++) {
        filename.push_back(make_pair(file[i],i));
    }

    for(int i=1;i<filename.size();i++) {
        if(filename[i-1].first == filename[i].first && filename[i].first == 'x') {
            filename[i].second = filename[i-1].second;
        }
    } 

    map<int,int>frequency;
    for(const auto& f : filename) {
        if(f.first == 'x') {
            frequency[f.second]++;
        }
    }

    int minimumRemoval = 0;
    for(auto f : frequency) {
        if(f.second > 2) {
            minimumRemoval += (f.second - 2);
        }
    }
    cout << minimumRemoval << endl;
    return 0;
}
