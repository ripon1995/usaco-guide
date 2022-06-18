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
    cin >> tc;
    while(tc--) {
        int students,swaps,rival1,rival2;
        cin >> students >> swaps >> rival1 >> rival2;
        if(rival1 > rival2)swap(rival1,rival2);
        int left = 1;
        int right = rival2 - (rival1-left);
        (right+swaps>students) ? right = students : right += swaps;
        cout << right - left << endl;
    }

    return 0;
}