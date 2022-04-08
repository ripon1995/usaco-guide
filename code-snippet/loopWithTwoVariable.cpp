#include<bits/stdc++.h>
using namespace std;


int main()
{
    int first = 10;
    int second = 7;

    for(int i=1,j=1;i<=first && j<=second; i++,j++) {
        cout << i << '\t' << j << endl;
    }

    for(int i=1,j=1;i<=first || j<=second; i++,j++) {
        cout << i << '\t' << j << endl;
    }

    return 0;
}