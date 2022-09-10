#include<vector>
#include<iostream>
#include<map>
#include<cmath>
#include<algorithm>
#include<stack>
#include<set>
#include<unordered_set>
#include<string>
using namespace std;

typedef vector<int>vi;
typedef vector<string>vs;
typedef map<int,vector<int> >mivi;
typedef pair<int,bool>pib;
typedef pair<int,int>pii;
typedef vector<pair<int,int> >vpii;

bool isPossible(vpii segments) {
    for(int i=1;i<segments.size();i++) {
        auto A = segments[i-1];
        auto B = segments[i];
        if(abs(A.first-B.first)<abs(A.second-B.second)) {
            return false;
        }
    }
    return true;
}

int res(pii A,pii B) {
    int placeGap = abs(A.first - B.first);
    int valGap = abs(A.second - B.second);
    int gap = abs(placeGap - valGap);
    gap -= 1;
    if(gap<0) {
        gap = 0;
    }
    int increment = ceil((double)gap/2);
    int ans = max(A.second,B.second) + increment;

    return ans;
}

int solve(vpii segments) {
    int ans = INT_MIN;
    if(segments.size()<2) {
        ans = max(ans,segments.front().second);
    }
    for(int i=1;i<segments.size();i++) {
        ans = max(ans,res(segments[i-1],segments[i]));
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int days,n;
    cin >> days >> n;
    // first one is index and second one is the value
    vpii segments(n);
    for(auto &s : segments) {
        cin >> s.first >> s.second;
    }
    if(segments.front().first != 1) {
        segments.insert(segments.begin()+0,make_pair(1,segments.front().second+abs(segments.front().first-1)));
    }
    if(segments.back().first != days) {
        segments.push_back(make_pair(days,segments.back().second+abs(segments.back().first - days)));
    }
    if(!isPossible(segments)) {
        cout << "IMPOSSIBLE" << '\n';
    }
    else {
        cout << solve(segments) << '\n';
    }
    
    return 0;
}
