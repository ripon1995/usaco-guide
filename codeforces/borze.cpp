#include<bits/stdc++.h>
using namespace std;
typedef map<int,int>mii;
typedef map<char,int>mci;
typedef map<string,int>msi;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string line;
    cin >> line;
    mci data;
    data['.'] = 0;
    data['-'] = 1;
    for(int i=0;i<line.length();i++) {
        if(line.at(i) == '.') {
            cout << "0";
        }
        else if(line.at(i) == '-') {
            if(line.at(i+1) == '-') {
                cout << "2";
            }
            else if(line.at(i+1) == '.') {
                cout << "1";
            }
            i++;
        }
    }
    cout <<'\n';

    return 0;
}