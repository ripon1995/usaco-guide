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

bool cmp(pair<int,int>A,pair<int,int>B) {
    return A.first < B.first;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<pair<int,int> > data;
    for(int i=1;i<=n;i++) {
        int val;
        cin >> val;
        data.push_back(make_pair(val,i));
    }

    sort(data.begin(),data.end(),cmp);
    
    int counter = 1;
    int ans = INT_MIN;
    for(int i=1;i<data.size();i++) {
        if(data[i].second < data[i-1].second) {
            ans = max(ans,counter);
            counter = 1;
        }
        else {
            counter++;
        }
    }
    ans = max(ans,counter);
    cout << n - ans << endl;
    return 0;
}
