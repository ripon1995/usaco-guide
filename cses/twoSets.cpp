#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    long long val = ((double)n * (n + 1)) / 2;
    if (val % 2 == 1) {
        cout << "NO" << '\n';
    }
    else {
        cout <<"YES"<<'\n';
        val /= 2;
        set<int> s1, s2;
        int i;
        for (i = n; i >= 1; i--) {
            if (val == 0) {
                break;
            }
            if (i <= val) {
                val -= i;
                s1.insert(i);
            }
            else {
                s2.insert(i);
            }
        }
        while(i!=0) {
            s2.insert(i);
            i--;
        }
        cout << s1.size() << '\n';
        for (auto s : s1) {
            cout << s << " ";
        }
        cout << '\n';
        cout << s2.size() << '\n';
        for (auto s : s2) {
            cout << s << " ";
        }
        cout << '\n';
    }
    return 0;
}