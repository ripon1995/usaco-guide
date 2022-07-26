#include<iostream>
#include<vector>
using namespace std;

int main() {
    string s,t;
    int n;
    while(cin >> n) {
        if(n==0) break;
        vector<int>ans;
        for(int i=0;i<n;i++) {
            int val;
            cin >> val;
            if(val!=0) {
                ans.push_back(val);
            }
        }
        if(ans.empty()==true) {
            cout << "0";
        }
        else {
            for(int i=0;i<ans.size();i++) {
                cout << ans[i];
                if(i<ans.size()-1) cout << " ";
            }
        }
        cout << '\n';
    }
    return 0;
}