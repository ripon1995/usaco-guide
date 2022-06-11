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
    
    int b,g;
    cin >> b;
    mii boys;
    int val;
    for(int i=0;i<b;i++) {
        cin >> val;
        boys[val]++;
    }
    cin >> g;
    vi girls(g);
    for(auto& g:girls) {
        cin >> g;
    }
    sort(girls.begin(),girls.end());
    int ans = 0;
    for(auto girl:girls) {
        if(boys.count(girl-1)) {
            ans++;
            boys[girl-1]--;
            if(boys[girl-1]==0) boys.erase(girl-1);   
        }
        else if(boys.count(girl)) {
            ans++;
            boys[girl]--;
            if(boys[girl]==0) boys.erase(girl);   
        }
        
        else if(boys.count(girl+1)) {
            ans++;
            boys[girl+1]--;
            if(boys[girl+1]==0) boys.erase(girl+1);   
        }
    }
    cout << ans << endl;
    return 0;
}
