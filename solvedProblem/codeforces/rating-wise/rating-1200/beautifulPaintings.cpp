#include<iostream>
#include<vector>
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

bool cmp(pair<int,int>A,pair<int,int>B) {
    return A.second > B.second;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    map<int,int>data;
    int val;
    for(int i=0;i<n;i++) {
        cin >> val;
        data[val]++;
    }
    
    vector<pair<int,int> > paintings;
    for(const auto &d : data) {
        paintings.push_back(make_pair(d.first,d.second));
    }

    int ans = 0;
    while(paintings.size()>0) {
        sort(paintings.begin(),paintings.end(),cmp);
        int minimum = paintings.back().second;
        int counter = 0;
        for(auto &p : paintings) {
            if(p.second >= minimum) {
                p.second -= minimum;
                counter++;
            }
        }
        while(paintings.size() > 0 && paintings.back().second <= 0) {
            paintings.pop_back();
        }

        ans += (counter-1) * minimum;
    }
    cout << ans << endl;
    return 0;
}
