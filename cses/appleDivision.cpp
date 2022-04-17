#include<bits/stdc++.h>
using namespace std;
typedef map<int,int>mii;
typedef map<char,int>mci;
typedef vector<int> vi; 
typedef long long ll;
const ll LLMAX = 1e18; 



vi appleGroupA;

ll minimumWeightedGroups(vi apples) {
    ll groupA = 0;
    ll groupB = 0;

    for(int i=0;i<apples.size();i++) {
        bool inGroupA = false;
        for(int j=0;j<appleGroupA.size();j++) {
            if(i==appleGroupA[j]) {
                inGroupA = true;
                groupA += apples[i];
            }
        }
        if(inGroupA == false) {
            groupB += apples[i];
        }
    }

    ll minimal = LLMAX;
    minimal = min(minimal,abs(groupA-groupB));
    return minimal;
}

ll minimalResult = LLMAX;

void search(int i,int n,vi apples) {
    if(i==n) {
        minimalResult = min(minimalResult,minimumWeightedGroups(apples));
    }
    else {
        appleGroupA.push_back(i);
        search(i+1,n,apples);
        appleGroupA.pop_back();
        search(i+1,n,apples);
    }
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vi apples(n);
    for(int i=0;i<n;i++) {
        cin >> apples[i];
    }
    search(0,n-1,apples);
    cout << minimalResult << '\n';
    return 0;
}