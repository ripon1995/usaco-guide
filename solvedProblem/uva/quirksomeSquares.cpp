#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int>quirkNumbers;
    for(int i=0;i<=9999;i++) {
        quirkNumbers.push_back(i*i);
    }

    int n;
    while(cin >> n) {
        for(int i=0;i<quirkNumbers.size();i++) {
            if(quirkNumbers[i] >= (int)pow(10.0,n)) {
                break;
            }

            int first = quirkNumbers[i] / (int)pow(10.0,n/2);
            int second = quirkNumbers[i] % (int)pow(10.0,n/2);

            if((first + second) * (first + second) == quirkNumbers[i]) {
                cout << setw(n) << setfill('0') << quirkNumbers[i] << endl;
            }

        }
    }
    return 0;
}