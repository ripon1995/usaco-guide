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
        int len;
        cin >> len;
        vi startTime(len);
        vi endTime(len);
        for(auto &st : startTime) cin >> st;
        for(auto &et : endTime) cin >> et;

        int currentEndTime = endTime.front();
        for(int i=1;i<len;i++) {
            currentEndTime = max(currentEndTime,endTime[i-1]);
            if(startTime[i] >= currentEndTime) {
                continue;
            }
            
            startTime[i] = currentEndTime;
        }

        for(int i=0;i<len;i++) {
            cout << endTime[i] - startTime[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}