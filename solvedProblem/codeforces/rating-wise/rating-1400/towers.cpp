#include<bits/stdc++.h>
using namespace std;

// vectors
typedef vector<int>vi;
typedef vector<pair<int,int>>vpii;

// pairs
typedef pair<int,int>pii;



pii maxElement(vi towers) {
    int maxElementIndex = max_element(towers.begin(),towers.end()) - towers.begin();
    return make_pair(maxElementIndex,towers.at(maxElementIndex));
}

pii minElement(vi towers) {
    int minElementIndex = min_element(towers.begin(),towers.end()) - towers.begin();
    return make_pair(minElementIndex,towers.at(minElementIndex));
}


int main()
{
    int n,k;
    cin >> n >> k;
    vi towers(n);
    for(auto &t : towers) {
        cin >> t;
    }
    vpii ans;
    pii maxx = maxElement(towers);
    pii minn = minElement(towers);
    int initialK = k;
    while(k > 0 && abs(maxx.second - minn.second)>1) {
        
        towers[minn.first]++;
        towers[maxx.first]--;
        k--;

        ans.push_back(make_pair(maxx.first+1,minn.first+1));

        maxx = maxElement(towers);
        minn = minElement(towers);
    }

    maxx = maxElement(towers);
    minn = minElement(towers);
    cout << maxx.second - minn.second << " " << initialK - k << endl;
    for(auto a : ans) {
        cout << a.first << " " << a.second << endl;
    }

    return 0;
}