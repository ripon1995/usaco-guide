#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

vector<int> getPriceList() {
    vector<int>price;
    for(int i=0;i<12;i++) {
        price.push_back(pow(2,i));
    }

    return price; 
}

int main() {

    int tc;
    cin >> tc;
    while(tc--) {
        vector<int>price = getPriceList();

        int p;
        cin >> p;

        int menuCount = 0;
        while(p > 0) {
            if(p >= price.back()) {
                menuCount += p / price.back();
                p %= price.back();
            }
            price.pop_back();
        }
        cout << menuCount << endl;
    }

    return 0;
}