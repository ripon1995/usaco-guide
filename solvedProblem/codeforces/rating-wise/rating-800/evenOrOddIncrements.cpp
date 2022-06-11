#include<bits/stdc++.h>
using namespace std;

typedef vector<int>vi;
typedef vector<string>vs;
typedef map<int,int> mii;
typedef map<string,int> msi;
typedef map<string,string>mss;
typedef map<int,pair<int,int>> mipii;
typedef map<int,vector<int>> mivi;
typedef pair<string,int>psi;
typedef set<string>ss;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int tc;
    cin >> tc;
    while(tc--) {
        int val;
        cin >> val;
        vi numbers(val);
        for(auto &n : numbers) {
            cin >> n;
        }
        bool isPossible = true;
        int evenIndexParity = numbers[1]%2;
        int oddIndexParity = numbers[0]%2;
        for(int i=2;i<numbers.size();i++) {
            if(i%2==0 && (oddIndexParity != (numbers[i]%2))) {
                isPossible = false;
                break;
            }
            else if(i%2==1 && (evenIndexParity != (numbers[i]%2))) {
                isPossible = false;
                break;
            }
        }
        cout << (isPossible ? "YES" : "NO" ) << endl;
    }
    return 0;
}