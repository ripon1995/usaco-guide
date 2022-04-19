#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int V,v;
    while(cin >> V >> v) {
        if(V == 0 && v==0) {
            break;
        }
        double maxLength = 0;
        int totalMax = 0;
        for(int i=1;i<=V;i++) {
            double volume =(double) V/i;
            double Diameter = 0.3 * sqrt(volume-v);
            double length = Diameter * i;
            if(length >= maxLength) {
                if(fabs(length-maxLength) < 1e-12) {
                    maxLength = 0;
                    totalMax = 0;
                    break;
                }
                maxLength = length;
                totalMax = i;
            }
        }
        cout << totalMax << '\n';
    }
    return 0;
}