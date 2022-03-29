#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    // 1st approach to create and fetch tuple data
    int a=10,b=20,c=30;
    tuple<int,int,int> t = tie(a,b,c);
    cout << get<0>(t) << " "<< get<1>(t) << " " << get<2>(t) << endl;

    // 2nd approach to create and fetch tuple data
    tuple<int,int,string> tup = make_tuple(1,2,"Bangladesh");
    int x,y;
    string data;
    tie(x ,y ,data) = tup;
    cout <<  x << y << data << endl;

    // to access any one
    get<2>(tup) = "DHAKA";
    tie(x,y,data) = tup;
    cout << x << y << data << endl;
    return 0;
}