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
        string line;
        cin >> len >> line;
        while(line.back()%2==0 && line.length()>0) {
            line.pop_back();
        }
        int digitSum = 0;
        int firstOddIndex = -1;
        for(int i=0;line.length()>0  && i<line.length()-1;i++) {
            int currentDigit = (line[i]-'0');
            digitSum += currentDigit;
            if(currentDigit%2==1 && firstOddIndex == -1) {
                firstOddIndex = i;
            }
        }
        if(line.length()==0) {
            cout << "-1" << '\n';
        }
        else {
            if(digitSum%2==0 && firstOddIndex != -1) {
                line.erase(line.begin()+firstOddIndex);
                while(line.front()=='0') {
                    line.erase(line.begin()+0);
                }
                cout << line << '\n';
            }
            else if(digitSum%2==1) {
                while(line.front()=='0') {
                    line.erase(line.begin()+0);
                }
                cout << line << '\n';
            }
            else {
                cout << "-1" << '\n';
            }
        }
    }
    return 0;
}

