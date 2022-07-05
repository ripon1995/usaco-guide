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
        string enemyPawn,gregorPawn;
        getline(cin,enemyPawn);
        getline(cin,enemyPawn);
        getline(cin,gregorPawn);

        for(int i=0;i<gregorPawn.length();i++) {
            if(gregorPawn[i]=='1') {
                // corner case
                if(i==0 || i==len-1) {
                    if(i==0) {
                        if(enemyPawn[i]=='0') {
                            //cout << "INSIDE1" << endl;
                            enemyPawn[i] = '2';
                        }
                        else if(enemyPawn[i+1]=='1') {
                            //cout << "INSIDE2" << endl;
                            enemyPawn[i+1] = '2';
                        }
                    }
                    if(i==len-1) {
                        if(enemyPawn[i]=='0') {
                            enemyPawn[i] = '2';
                        }
                        else if(enemyPawn[i-1]=='1') {
                            enemyPawn[i-1] = '2';
                        }
                    }
                }

                // others
                else {
                    if(enemyPawn[i]=='0') {
                        enemyPawn[i] = '2';
                    }
                    else if(enemyPawn[i-1]=='1') {
                        enemyPawn[i-1] = '2';
                    }
                    else if(enemyPawn[i+1]=='1') {
                        enemyPawn[i+1] = '2';
                    }
                }
            }
        }
        int total = count(enemyPawn.begin(),enemyPawn.end(),'2');
        cout << total << '\n';
        
    }

    return 0;
}