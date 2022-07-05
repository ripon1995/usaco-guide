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
        int len;
        cin >> len;
        string number;
        getline(cin,number);
        getline(cin,number);

        int count = 0;
        count += number.back()-'0';
        for(int i=0;i<number.length()-1;i++) {
            if(number[i] == '0') {
                continue;
            }

            count += (number.at(i)-'0' + 1);
        }
        cout << count << endl;
    }

    return 0;
}