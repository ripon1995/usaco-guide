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
    
    int tc;
    cin >> tc;
    while(tc--) {
        int len;
        cin >> len;
        unordered_set<int>permutation;
        vi res;
        vi data(2*len);
        for(auto& d : data) cin >> d;
        for(auto d:data) {
            if(!permutation.count(d)) {
                res.push_back(d);
            }
            permutation.insert(d);
        }

        for(auto r : res) {
            cout << r << " ";
        }
        cout << endl;
    }
    return 0;
}
