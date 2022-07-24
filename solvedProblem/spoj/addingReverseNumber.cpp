#include<iostream>
#include<vector>
#include<map>
#include<cmath>
#include<algorithm>
#include<stack>
#include<set>
#include<unordered_set>
#include<string>
using namespace std;

typedef vector<int>vi;
typedef vector<string>vs;
typedef map<int,vector<int> >mivi;
typedef pair<int,bool>pib;
typedef pair<int,int>pii;

string numToReversedVector(int n) {
    string data;
    while(n>0) {
        data.push_back((n%10)+'0');
        n /= 10;
    }
    return data;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int tc;
    cin >> tc;
    while(tc--) {
        int a,b;
        cin >> a >> b;
        string first = numToReversedVector(a);
        string second = numToReversedVector(b);

        a = stoi(first);
        b = stoi(second);
        long long int ans = a + b;
        string anss = numToReversedVector(ans);
        ans = stoi(anss);
        cout << ans << endl;
    }
    return 0;
}

