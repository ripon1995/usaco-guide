#include<bits/stdc++.h>
using namespace std;

typedef vector<int>vi;
typedef map<string,int> msi;
typedef unordered_map<int,int>umii;
typedef map<int,pair<int,int>> mipii;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    umii data;
    vi index;
    int val;
    int ind=0;
    while(scanf("%d", &val) == 1) {
        if(cin.eof()) {
            break;
        }
        if(data.count(val) == 0) {
            data[val] = 1;
            index.push_back(val); 
        }
        else data[val]++;
    }
    
    for(auto d:index) {
        cout << d << " " << data[d] << endl;
    }

    return 0;
}

