#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int h,k;
    while(cin >> h >> k) {
        if(h == 0 && k == 0) break;

        vector<int>heads(h);
        for(auto &h : heads) cin >> h;
        
        vector<int>knights(k);
        for(auto &k : knights) cin >> k;
        
        sort(heads.begin(),heads.end());
        sort(knights.begin(),knights.end());

        int totalCost = 0;
        for(int i=0;i<knights.size();i++) {
            if(heads.size()>0 && knights[i] >= heads.front()) {
                totalCost += knights[i];
                heads.erase(heads.begin()+0);
            }
        }

        if(heads.size()==0) {
            cout << totalCost << endl;
        }
        else {
            cout << "Loowater is doomed!" << endl;
        }

    }
    return 0;
}