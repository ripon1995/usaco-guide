#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int len,n;
    cin >> len >> n;
    string str;
    cin >> str;
    while(n--) {
        for(int i=1;i<str.length();i++) {
            if(str[i-1] == 'B' && str[i] == 'G') {;
                swap(str[i-1],str[i]);
                i += 1;
            }
        }
    }
    cout << str << '\n';
    return 0;
}