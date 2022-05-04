#include<bits/stdc++.h>
using namespace std;


int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int>data(n);
    for(int i=0;i<n;i++) {
        cin >> data[i];
    }
    sort(data.begin(),data.end());
    data.resize(unique(data.begin(),data.end())-data.begin());
    cout << data.size() << endl;
    return 0;
}

