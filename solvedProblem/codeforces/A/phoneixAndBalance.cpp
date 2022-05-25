#include<iostream>
#include<vector>
#include<map>
#include<cmath>
using namespace std;

typedef vector<int>vi;
typedef map<int,vector<int> >mivi;

vi genereateCoinValue() {
    vector<int>coinValue;
    for(int i=1;i<=30;i++) {
        coinValue.push_back(pow(2,i));
    }
    return coinValue;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    vi coinValue = genereateCoinValue();   
    int tc;
    cin >> tc;
    while(tc--) {
        int val;
        cin >> val;
        vi data;
        data.push_back(coinValue[val-1]);
        for(int i=0;i<val-1;i++) {
            data.push_back(coinValue[i]);
        }
        int sum1 = 0;
        int sum2 = 0;
        for(int i=0;i<val/2;i++) {
            sum1 += data[i];
        }
        for(int i=val/2;i<val;i++) {
            sum2 += data[i];
        }
        cout << sum1 - sum2 << endl;
        
    }
    return 0;
}