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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vi ans;
    int divisor = 2;
    while(n >= 2) {
        if(n%divisor!=0) {
            divisor++;
        }
        else {
            ans.push_back(n);
            n /= divisor;
        }
    }

    ans.push_back(1);
    for(auto a : ans) {
        cout << a << " ";
    }
    return 0;
}
