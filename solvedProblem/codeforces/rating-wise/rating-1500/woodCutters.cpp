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

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<pair<int,int> > tree(n);
    for(auto &t : tree) {
        cin >> t.first >> t.second;
    }
    vector<pair<int,int> >segments(n);
    segments[0] = make_pair(tree.front().first-tree.front().second,tree.front().first);
    segments[n-1] = make_pair(tree.back().first,tree.back().first+tree.back().second);

    for(int i=1;i<tree.size()-1;i++) {
        int spaceAtLeft = abs(segments[i-1].second-tree[i].first);
        int spaceAtRight = abs(tree[i].first - tree[i+1].first);
        int spaceRequired = tree[i].second;
        
        if(spaceAtLeft > spaceRequired) {
            segments[i] = make_pair(tree[i].first-spaceRequired,tree[i].first);
        }
        else if(spaceAtRight > spaceRequired) {
            segments[i] = make_pair(tree[i].first,tree[i].first+spaceRequired);
        }
        else {
            segments[i] = make_pair(tree[i].first,tree[i].first);
        }
    }
    
    int totalCutDownTree = 0;
    for(const auto &s : segments) {
        if(s.first != s.second) {
            totalCutDownTree++;
        }
    }
    cout << totalCutDownTree << endl;
    return 0;
}
