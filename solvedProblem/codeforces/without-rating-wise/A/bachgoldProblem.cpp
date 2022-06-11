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

bool isPrime(int val) {
    for(int i=2;i<=sqrt(val);i++) {
        if(val%i==0) {
            return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    int val = 2;
    mivi result;
    while(n>1) {
        result[2].push_back(2);
        n-=2;
    }
    if(n==1) {
        result[2].pop_back();
        result[3].push_back(3);
    }

    cout << result[2].size()+result[3].size() << endl;
    for(const auto& rr:result) {
        for(auto r:rr.second) {
            cout << r << " ";
        }
    }
    return 0;
}
