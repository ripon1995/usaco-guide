#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n,d,r;
    while(cin >> n >> d >> r) {
        if(n==0 && d==0 && r==0) break;
        vector<int>mr(n);
        vector<int>er(n);
        for(auto &m : mr) cin >> m;
        for(auto &e : er) cin >> e;

        sort(mr.begin(),mr.end());
        sort(er.begin(),er.end());
        reverse(er.begin(),er.end());

        long long int totalCost = 0;
        for(int i=0;i<mr.size();i++) {
            int totalTime = mr[i]+er[i];
            int overTime = 0;
            if(totalTime > d) {
                overTime = totalTime - d;
            }
            totalCost += (overTime * r);
        }

        cout << totalCost << endl;
    }
    return 0;
}