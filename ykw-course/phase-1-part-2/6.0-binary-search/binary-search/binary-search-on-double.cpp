#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<numeric>
#include<iomanip>
#include<sstream>
#include<stack>
#include<queue>
#include<map>
#include<vector>
#include<set>
using namespace std;
typedef pair<int,int> pii;
 
const int N = 1e5 + 9;
 
/*
problem link:
https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/E
*/

/*
to binary search in double we have to set r = mid and l = mid
to get the double search space
*/

bool f(double x, double c) {
    double ans = (x*x) + sqrt(x);
    if(ans >= c) {
        return true;
    }

    return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    double c;
    cin >> c;
    double l=0;
    double r = 1e5;
    double ans = -1;
    while((r-l) >= 1e-7) {
        double mid = (l+r)/2;
        if(f(mid,c)) {
            ans = mid;
            r = mid;
        }
        else {
            l = mid;
        }
    }

    cout << fixed << setprecision(7) << ans << endl;

    return 0;
}