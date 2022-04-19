#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<pair<int,int>>vpii;
    int n;
    while(cin >> n) {
        for(int i=n+1;i<=2*n;i++) {
            int second = i;
            if((second*n)%(second-n)==0) {
                int first = (second*n)/(second-n);
                vpii.push_back(make_pair(first,second));
            }
        }
        cout << vpii.size() << endl;
        for(auto v:vpii) {
            cout << "1/" << n << " = " << "1/" << v.first << " + 1/" << v.second << endl;
        }
        vpii.clear();
    }
    return 0;
}