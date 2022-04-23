#include<bits/stdc++.h>
using namespace std;
typedef map<int,int>mii;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int l,h,r;
    mii buildings;
    while(cin >> l >> h >> r) {
        for(int i=l;i<r;i++) {
            buildings[i] = max(buildings[i],h);
        }
        if(buildings.count(r)==0) {
            buildings[r] = 0;
        }
        else {
            buildings[r] = max(buildings[r],0);
        }
    }
    vector<pair<int,int>>skyLine;
    int height = -1;
    for(auto b : buildings) {
        if(height != b.second) {
            skyLine.push_back(make_pair(b.first,b.second));
            height = b.second;
        }
    }
    int sz = skyLine.size();
    int c=1;
    for(auto s:skyLine) {
        cout << s.first << " " << s.second;
        if(c < sz) {
            cout << " ";
        }
        c++;
    }
    cout << endl;
    return 0;
}
