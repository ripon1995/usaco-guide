#include<vector>
#include<iostream>
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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int val;
    cin >> val;
    vi data(val);
    for(auto &d : data) {
        cin >> d;
    }

    sort(data.begin(),data.end());
    reverse(data.begin(),data.end());

    int current = data.front();
    long long int ans = 0;
    for(const auto &d : data) {
        if(current == d) {
            ans += current;
        }
        else {
            ans += min(current,d);
            current = min(current,d);
        }
        current--;
        if(current<0) {
            break;
        }
    }

    cout << ans << endl;
    return 0;
}
