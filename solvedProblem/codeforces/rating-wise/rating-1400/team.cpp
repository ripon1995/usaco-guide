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

string getAns(int numberOfZero,int numberOfOne) {
    string ans="";
    while(numberOfOne>0 && numberOfZero>0) {
        if(numberOfOne>=2 && (numberOfOne >= numberOfZero*2)) {
            ans += "11";
            numberOfOne-=2;
        }
        else {
            ans += "1";
            numberOfOne--;
        }

        if(numberOfZero>0) {
            ans += "0";
            numberOfZero--;
        }
    }

    while(numberOfZero > 0) {
        if(ans.front()!='0') {
            ans.insert(ans.begin()+0,'0');
        }
        else if(ans.back()!=0) {
            ans += "0";
        }
        else {
            ans += "0";
        }
        numberOfZero--;
    }
    while(numberOfOne > 0) {
        ans += '1';
        numberOfOne--;
    }

    if(ans.find("00")!=ans.npos || ans.find("111")!=ans.npos) {
        ans = "-1";
    }
    return ans;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int zeroes,ones;
    cin >> zeroes >> ones;

    string ans;
    if(ones>=zeroes) {
        ans = getAns(zeroes,ones);
    }
    else if(ones < zeroes) {
        ans = getAns(zeroes,ones);
    }
    cout << ans << endl;

    return 0;
}
