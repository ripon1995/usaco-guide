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

    int n;
    cin >> n;
    vector<int>values(n);
    for(auto &v : values) {
        cin >> v;
    }

    map<int,int>tickets;
    bool isPossible = true;
    int val;
    for(int i=0;i<values.size();i++) {
        val = values.at(i);
        if(val == 25) {
            tickets[25]++;
        }
        else if(val == 50) {
            if(tickets[25]==0) {
                isPossible = false;
                break;
            }
            else {
                tickets[25]--;
                tickets[50]++;
            }
        }
        else if(val == 100) {
            if(tickets[25]==0) {
                isPossible = false;
                break;
            }
            else {
                if(tickets[50]>0) {
                    tickets[50]--;
                    tickets[25]--;
                }
                else {
                    if(tickets[25]<3) {
                        isPossible = false;
                        break;
                    }
                    else {
                        tickets[25] -= 3;
                    }
                }
            }
        }
    }
    if(isPossible == false) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
    }
    return 0;
}
