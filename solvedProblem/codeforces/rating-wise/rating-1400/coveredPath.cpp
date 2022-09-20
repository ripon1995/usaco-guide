#include<bits/stdc++.h>
using namespace std;

typedef vector<int>vi;

int main()
{
    
    int u,v;
    int t,d;
    cin >> u >> v;
    cin >> t >> d;
    vi path1;
    vi path2;

    path1.push_back(u);
    for(int i=2;i<=t;i++) {
        path1.push_back(path1.back() + d);
    }

    path2.push_back(v);
    for(int i=2;i<=t;i++) {
        path2.push_back(path2.back() + d);
    }
    reverse(path2.begin(),path2.end());

    vi paths;
    for(int i=0;i<path1.size();i++) {
        paths.push_back(min(path1[i],path2[i]));
    }
    
    int sum = 0;
    for(const auto &p : paths) {
        sum += p;
    }
    cout << sum << endl;
    return 0;
}