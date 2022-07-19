#include<iostream>
#include<vector>
#include<map>
#include<cmath>
#include<algorithm>
#include<stack>
#include<set>
#include<unordered_set>
using namespace std;

typedef vector<int>vi;
typedef vector<string>vs;
typedef map<int,vector<int> >mivi;
typedef pair<int,bool>pib;
typedef pair<int,int>pii;

bool cmp(pair<int,int>a,pair<int,int>b) {
    return a.first > b.first;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int c;
    cin >> c;
    vector<pair<int,int> > cans(c);
    for(int i=0;i<cans.size();i++) {
        cin >> cans[i].first;
        cans[i].second = i+1;
    }
    sort(cans.begin(),cans.end(),cmp);
    long long total = 0;
    for(int i=0;i<cans.size();i++) {
        total += ((cans[i].first * i) + 1);
    }
    cout << total << endl;
    for(const auto &c : cans) {
        cout << c.second << " ";
    }
    cout << endl;
    return 0;
}

