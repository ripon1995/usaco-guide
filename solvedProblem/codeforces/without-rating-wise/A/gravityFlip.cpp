#include<iostream>
#include<vector>
#include<map>
#include<cmath>
#include<algorithm>
using namespace std;

typedef vector<int>vi;
typedef map<int,vector<int> >mivi;
typedef pair<int,bool>pib;


int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    int val;
    cin >> val;
    vi data(val);
    for(auto& d : data) {
        cin >> d;
    }
    sort(data.begin(),data.end());
    for(const auto& d : data) {
        cout << d << " ";
    }
    return 0;
}