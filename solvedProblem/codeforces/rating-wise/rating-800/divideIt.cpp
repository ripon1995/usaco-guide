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
        long long int val;
        cin >> val;
        int stepCount = 0;
        while(val%5 == 0 || val%3==0 || val%2 == 0) {
            if(val%5==0) {
                val = 4*(val/5);
            }
            else if(val%3==0) {
                val = 2*(val/3);
            }
            else if(val%2==0) {
                val/=2;
            }
            stepCount++;
        }
        cout << (val == 1 ? stepCount : -1) << endl;
    }

    return 0;
}