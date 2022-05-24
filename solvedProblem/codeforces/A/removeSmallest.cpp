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

    int tc;
    cin >> tc;
    while(tc--) {
        int n;
        cin >> n;
        vi num(n);
        for(auto& n:num) {
            cin >> n;
        }
        sort(num.begin(),num.end());
        for(int i=0;i<num.size()-1;i++) {
            if(abs(num[i]-num[i+1])<=1) {
                num[i] = -1;
            }
        }
        int negativeCount = 0;
        for(auto n:num) {
            if(n==-1) negativeCount++;
        }
        if(num.size()-negativeCount<=1) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    } 

    return 0;
}
