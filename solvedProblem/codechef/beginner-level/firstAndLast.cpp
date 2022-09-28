#include<iostream>
#include<vector>

using namespace std;

int main() {

    int tc;
    cin >> tc;
    while(tc--) {
        int val;
        cin >> val;
        vector<int> data(val);
        for(auto &d : data) {
            cin >> d;
        }
        
        int ans = data.front() + data.back();
        for(int i=1;i<data.size();i++) {
            int a = data[i-1] + data[i];
            ans = max(ans,a);
        }
        cout << ans << endl;
    }

    return 0;
}