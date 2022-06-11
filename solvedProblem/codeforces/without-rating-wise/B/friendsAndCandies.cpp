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
        int friends;
        cin >> friends;
        vi candies(friends);
        int totalCandies = 0;
        for(auto& c : candies) {
            cin >> c;
            totalCandies += c;
        }
        int ans = 0;
        if(totalCandies%friends == 0) {
            int candyForEachFriend = totalCandies/friends;
            for(const auto& c : candies) {
                if(c > candyForEachFriend) {
                    ans++;
                }
            }
        }
        else {
            ans = -1;
        }
        cout << ans << endl;
    }
    return 0;
}
