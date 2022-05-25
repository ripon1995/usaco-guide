#include<iostream>
#include<vector>
#include<map>
#include<cmath>
using namespace std;

typedef vector<int>vi;
typedef map<int,vector<int> >mivi;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    int tc;
    cin >> tc;
    while(tc--) {
        int w,h,n;
        cin >> w >> h >> n;
        int count = 1;
        while(w%2==0 || h%2==0) {
            if(w%2==0) {
                w/=2;
            }
            else if(h%2==0) {
                h/=2;
            }
            count *= 2;
        }
        if(count == 0) count = 1;
        (count >= n) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}