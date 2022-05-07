#include<bits/stdc++.h>
using namespace std;

typedef vector<int>vi;
typedef map<int,int> mii;
typedef map<string,int> msi;
typedef map<string,string>mss;
typedef map<int,pair<int,int>> mipii;
typedef map<int,vector<int>> mivi;
typedef pair<string,int>psi;

map<string,double> getPercentage(msi tree,int totalTree) {
    map<string,double>percentage;
    for(auto t:tree) {
        double p = (double)(t.second*100)/totalTree;
        percentage[t.first] = p;
    }
    return percentage;
}


int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    string tree;
    int tc;
    cin >> tc;
    getline(cin,tree);
    getline(cin,tree);
    while(tc--) {
        msi treeData;
        int totalTreeCount = 0;
        while(getline(cin,tree)) {
            if(tree=="") {
                break;
            }
            treeData[tree]++;
            totalTreeCount++;
        }
        map<string,double> result = getPercentage(treeData,totalTreeCount);
        for(auto r:result) {
            cout << r.first << " " << fixed << setprecision(4) << r.second << endl;
        }
        treeData.clear();
        result.clear();
        if(tc>0) {
            cout << endl;
        }
    }
    return 0;
}
