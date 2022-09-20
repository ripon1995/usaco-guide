#include<bits/stdc++.h>
using namespace std;

// vectors
typedef vector<int>vi;
typedef vector<pair<int,int>>vpii;

// pairs
typedef pair<int,int>pii;

void check(vpii data) {
    for(auto d : data) {
        cout << d.first << " " << d.second << endl;
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    pii point;
    vi ox;
    vi oy;
    for(int i=0;i<n;i++) {
        cin >> point.first >> point.second;
        ox.push_back(point.first);
        oy.push_back(point.second);
    }
    sort(ox.begin(),ox.end());
    sort(oy.begin(),oy.end());
    
    long long int xx = ox.back() - ox.front();
    long long int yy = oy.back() - oy.front();

    long long int ll = max(xx,yy);
    long long area = ll * ll;
    cout << area << endl;
    
    return 0;
}