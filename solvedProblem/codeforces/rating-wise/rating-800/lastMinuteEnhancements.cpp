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
        map<int,int>notes;
        int note;
        for(int i=0;i<len;i++) {
            cin >> note;
            if(notes.count(note)==0) {
                notes[note]++;
            }
            else if(notes.count(note+1)==0) {
                notes[note+1]++;
            }
            else {
                notes[note]++;
            }
        }
        cout << notes.size() << '\n';
    }

    return 0;
}