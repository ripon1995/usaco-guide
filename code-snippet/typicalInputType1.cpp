// here every test case can take unlimited number of string as input until a blank line is entered.

#include<bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc;
    scanf("%d", &tc);
    while(tc--) {
        string tree;
        while(getline(cin,tree)) {
            if(tree.length()==0) {
                break;
            }
            cout << tree << endl;
        }
    }
    return 0;
}
