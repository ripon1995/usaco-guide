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

    int tc;
    cin >> tc;
    while(tc--) {
        int num;
        cin >> num;
        int counter = 0;
        while(num > 0) {
            string numToString = to_string(num);
            string nextNum;
            for(int i=0;i<numToString.length();i++) {
                char cur = numToString[i];
                if(cur=='0' || cur=='1') {
                    nextNum.push_back(cur);
                }
                else {
                    nextNum.push_back('1');
                }
            }
            int currentNum = stoi(nextNum);
            num -= currentNum;
            counter++;
        }
        cout << counter << endl;
    }

    return 0;
}