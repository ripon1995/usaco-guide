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
        vi numbers(len);
        
        for(auto &n : numbers) {
            cin >> n;
        }
        
        pair<int,int>index = make_pair(0,0);

        for(int i=0;i<numbers.size();i++) {
            if(i+1 != numbers[i]) {
                index.first = i;
                index.second = find(numbers.begin(),numbers.end(),i+1)-numbers.begin();
                break;
            }
        }

        while(index.first < index.second) {          
            swap(numbers[index.first],numbers[index.second]);
            index.first += 1;
            index.second -= 1;
        }

        for(const auto &n : numbers) {
            cout << n << " ";
        }
        cout << '\n';
    }

    return 0;
}