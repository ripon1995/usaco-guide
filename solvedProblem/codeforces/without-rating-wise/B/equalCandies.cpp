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
        int c;
        cin >> c;
        vi candies(c);
        for(auto& c : candies) {
            cin >> c;
        }
        int minCandy = *min_element(candies.begin(),candies.end());
        long long candyHaveToEat = 0;
        for(const auto& c : candies) {
            candyHaveToEat += abs(c-minCandy);
        }
        cout << candyHaveToEat << '\n';
    }
    return 0;
}
