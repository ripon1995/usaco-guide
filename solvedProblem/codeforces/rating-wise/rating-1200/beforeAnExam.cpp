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


int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int d,sumTime,minTime,maxTime;
    cin >> d >> sumTime;

    vector<pair<int,int> > dailyTime;
    vi ans;
    for(int i=0;i<d;i++) {
        cin >> minTime >> maxTime;
        dailyTime.push_back(make_pair(minTime,maxTime));
        ans.push_back(minTime);
        sumTime -= ans.back();
    }
    for(int i=0;i<d;i++) {
        
        if(ans[i]+sumTime >= dailyTime[i].second) {
            ans[i] = dailyTime[i].second;
            sumTime += dailyTime[i].first;
            sumTime -= dailyTime[i].second;
        }

        else if(ans[i]+sumTime >= dailyTime[i].first && ans[i]+sumTime < dailyTime[i].second) {
            ans[i] += sumTime;
            sumTime = 0;
        }
    }

    if(sumTime == 0) {
        cout << "YES" << endl;
        for(int i=0;i<ans.size();i++) cout << ans[i] << " ";
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
