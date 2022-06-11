#include<iostream>
#include<vector>
#include<map>
using namespace std;

typedef vector<int>vi;
typedef map<int,vector<int> >mivi;
int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc;
    cin >> tc;
    while(tc--) {
        int val;
        cin >> val;
        vi numbers(val);
        for(auto& n : numbers) {
            cin >> n;
        }
        mivi data;
        
        for(int i=0;i<numbers.size();i++) {
            if(numbers[i]%2 != i%2) {
                data[i%2].push_back(i);
            }
        }
        if(data[0].size() != data[1].size()) {
            cout << "-1" << endl;
        }
        else {
            cout << data[0].size() << endl;
        }

    }

    return 0;
}