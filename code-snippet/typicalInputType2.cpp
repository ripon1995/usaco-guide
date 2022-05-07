// here every test case can take unlimited number of string as input until a blank line is entered.

#include<bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    string tree;
    int tc;
    cin >> tc;
    getline(cin,tree); // this will take the newline character after integer input
    getline(cin,tree); // this will take the blankline input
    while(tc--) {
        while(getline(cin,tree) && tree.length()!=0) {
            cout << tree << endl;
        }
    }
    return 0;
}
