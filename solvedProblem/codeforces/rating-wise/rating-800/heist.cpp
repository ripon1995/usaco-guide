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

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc;
    vi keyboards;
    cin >> tc;
    while(tc--) {
        int k;
        cin >> k;
        keyboards.push_back(k);
    }
    sort(keyboards.begin(),keyboards.end());
    int stolenCounter = 0;
    for(int i=1;i<keyboards.size();i++) {
        stolenCounter += abs(keyboards[i-1]-keyboards[i])-1;
    }
    cout << stolenCounter << endl;

    return 0;
}