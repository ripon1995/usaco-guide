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

    int val;
    cin >> val;
    vi numbers(val);
    for(auto &n : numbers) {
        cin >> n;
    }
    sort(numbers.begin(),numbers.end());
    
    while(numbers.front()!=numbers.back()) {
        for(int i=1;i<numbers.size();i++) {
            if(numbers.front()!=numbers[i]) {
                numbers[i] -= numbers.front();
            }
        }

        sort(numbers.begin(),numbers.end());
    }

    
    int ans = numbers.front() * numbers.size();
    cout << ans << endl;
    return 0;
}
