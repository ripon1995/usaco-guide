#include<bits/stdc++.h>
using namespace std;

int main() {
    string data;
    getline(cin,data);
    cout << data << endl;

    // to avoid white spaces before a string 
    getline(cin >> std::ws,data);
    cout << data << endl;
}