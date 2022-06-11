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


int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc;
    cin >> tc;
    while(tc--) {
        int val;
        cin >> val;
        vi cats;
        for(int i=1;i<=val;i++) {
            cats.push_back(i);
        }
        if(val%2==0) {
            for(int i=0;i<cats.size();i+=2) {
                swap(cats[i],cats[i+1]);
            }
        }
        else {
            for(int i=0;i<cats.size()-1;i+=2) {
                swap(cats[i],cats[i+1]);
            }
            swap(cats[cats.size()-1],cats[cats.size()-2]);
        }

        for(const auto &c : cats) {
            cout << c << " ";
        }
        cout << endl;
    }
    
    return 0;
}