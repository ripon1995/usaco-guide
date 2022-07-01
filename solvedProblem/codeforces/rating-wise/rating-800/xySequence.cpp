#include<iostream>
#include<vector>
#include<map>
#include<cmath>
#include<algorithm>
#include<stack>
#include<set>
#include<unordered_set>
using namespace std;

typedef vector<int>vi;
typedef vector<string>vs;
typedef map<int,vector<int> >mivi;
typedef pair<int,bool>pib;
typedef pair<int,int>pii;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc;
    cin >> tc;
    while(tc--) {
        int n,b,x,y;
        cin >> n >> b >> x >> y;
        vector<long long int>data;
        long long int sum = 0;
        data.push_back(0);
        for(int i=1;i<=n;i++) {
            long long int sumWithX = data.back() + x;
            long long int subWithY = data.back() - y;
            if(sumWithX <= b) {
                data.push_back(sumWithX);
            }
            else {
                data.push_back(subWithY);
            }
            sum+=data.back();
        }
        cout << sum << '\n';
    }

    return 0;
}