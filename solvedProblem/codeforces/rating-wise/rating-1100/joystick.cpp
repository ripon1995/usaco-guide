#include<iostream>
#include<vector>
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

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int a,b;
    cin >> a >> b;
    if(a>b) {
        swap(a,b);
    }
    int ans = 0;
    bool isChargingFirst = true;
    if(a>1 || b>1) {
        while(a>0 && b>0) {

        if(isChargingFirst == true) {
            if(b <= 2) {
                isChargingFirst = false;
            }
            else {
                a += 1;
                b -= 2;
            }
        }
        if(isChargingFirst == false) {
            if(a <= 2) {
                isChargingFirst = true;
                a += 1;
                b -= 2;
            }
            else {
                a -= 2;
                b += 1;
            }
        }
        ans++;
    }
    }
    cout << ans << endl;
    return 0;
}
