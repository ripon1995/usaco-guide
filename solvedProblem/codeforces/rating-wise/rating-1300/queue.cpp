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
    cin.tie(0);

    int n;
    cin >> n;
    vi time(n);
    for(auto &t : time)  {
        cin >> t;
    }
    sort(time.begin(),time.end());
    vi cumulativeTime;
    cumulativeTime.push_back(time.front());
    int disappointedPeople = 0;
    for(int i=1;i<time.size();i++) {
        if(time[i]>=cumulativeTime.back()) {
            cumulativeTime.push_back(cumulativeTime.back()+time[i]);
        }
        else {
            disappointedPeople++;
        }
    }
    cout << n - disappointedPeople << endl;
    return 0;
}
