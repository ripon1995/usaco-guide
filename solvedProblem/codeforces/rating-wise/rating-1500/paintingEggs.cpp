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

    int n;
    cin >> n;
    int a,b;
    vector<pair<int,int>>vpii;
    for(int i=0;i<n;i++) {
        cin >> a >> b;
        vpii.push_back(make_pair(a,b));
    }

    int totalA = 0;
    int totalB = 0;

    string ans="";
    for(const auto &v : vpii) {
        if(abs(totalA+v.first - totalB)>=500) {
            int t = abs(totalA+v.first - totalB);
            if(t>500) {
                ans.push_back('G');
                totalB += v.second;
            }
            else {
                ans.push_back('A');
                totalA += v.first;
            }
        }
        else if(abs(totalB+v.second - totalA)>=500) {
            int t = abs(totalB+v.second - totalA);
            if(t > 500) {
                ans.push_back('A');
                totalA += v.first;
            }
            else {
                ans.push_back('B');
                totalB += v.second;
            }
        }
        else {
            ans = "-1";
            break;
        }
    }

    cout << ans << endl;
    return 0;
}