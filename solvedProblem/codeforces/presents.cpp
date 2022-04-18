#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;

bool cmp(pii a, pii b) {
    return a.first < b.first;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    
    int friends;
    cin >> friends;
    vector<pii> present(friends);
    int p;
    for(int i=0;i<friends;i++) {
        cin >> p;
        present[i] = (make_pair(p,i+1));
    }
    sort(present.begin(),present.end(),cmp);
    for(auto p:present) {
        cout << p.second << " ";
    }
    return 0;
}