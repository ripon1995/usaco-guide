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
        int reviewer;
        cin >> reviewer;
        int upVote = 0;
        int downVote = 0;
        int vote;
        for(int i=1;i<=reviewer;i++) {
            cin >> vote;
            if(vote == 1) {
                upVote++;
            }
            else if(vote == 2) {
                downVote++;
            }
            else if(vote == 3) {
                upVote++;
            }
        }
        cout << upVote << endl;
    }    
    
    return 0;
}