#include<iostream>
using namespace std;

int solve(int num) {
    string s = to_string(num);
    sort(s.begin(),s.end());
        
    int n1 = (s[3]-'0') + ((s[0]-'0') * 10);
    int n2 = (s[2]-'0') + ((s[1]-'0') * 10);
        
    return n1 + n2;
}

int main() {
    cout << solve(4009) << endl;
    return 0;
}