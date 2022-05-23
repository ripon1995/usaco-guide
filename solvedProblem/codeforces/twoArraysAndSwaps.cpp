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

bool cmp(int a,int b) {
    return a>b;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tc;
    cin >> tc;
    while(tc--) {
        int n,k;
        cin >> n >> k;
        vi first(n,0);
        vi second(n,0);
        for(auto& f:first)cin >> f;
        for(auto& s:second)cin >> s;
        sort(first.begin(),first.end());
        sort(second.begin(),second.end(),cmp);
        int index = 0;
        for(int i=1;i<=k;i++) {
            if(first[index]<second[index]) {
                swap(first[index],second[index]);
            }
            index++;
        }
        int sum = 0;
        for(const auto& f:first) {
            sum += f;
        }
        cout << sum << endl;
    }
    return 0;
}
