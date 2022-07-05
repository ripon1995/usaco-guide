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

int countGood(vi data) {
    int goodCounter = 0;
    for(int i=0;i<data.size();i++) {
        for(int j=i+1;j<data.size();j++) {
            if(__gcd(data[i],2*data[j]) > 1) goodCounter++;
        }
    }
    return goodCounter;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc;
    cin >> tc;
    while(tc--) {
        int len;
        cin >> len;
        vi data;
        int d;
        for(int i=0;i<len;i++) {
            cin >> d;
            if(d%2 == 0) {
                data.insert(data.begin(),d);
            }
            else {
                data.push_back(d);
            }
        }
        cout << countGood(data) << '\n';
    }
    return 0;
}