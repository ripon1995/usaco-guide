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


vi getData(int len,int n) {
    vi data;
    for(int i=1;i<=(len-n);i++) {
        data.push_back(0);
    }
    while(n>0) {
        data.push_back(n--);
    }
    return data;
}

set<int> initSet() {
    set<int>numbers;
    numbers.insert(1);
    numbers.insert(0);
    return numbers;
}

vi initAns(int len) {
    vector<int>ans;
    for(int i=0;i<len;i++) {
        ans.push_back(i+1);
    }
    return ans;
}



int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int len,n;
    cin >> len >> n;

    vi ans = initAns(len);
    set<int>numbersToCheck = initSet();
    vi comparableData = getData(len,n);
    
    for(int i=(len-n);i<len;i++) {
        int currentValueByAddition = ans[i-1]+comparableData[i];
        int currentValueBySubtraction = abs( ans[i-1] - comparableData[i]);
    
        if(currentValueByAddition <= len && !numbersToCheck.count(currentValueByAddition)) {
            ans[i] = currentValueByAddition;
            numbersToCheck.insert(currentValueByAddition);
        }
        else {
            ans[i] = currentValueBySubtraction;
            numbersToCheck.insert(currentValueBySubtraction);
        }
    }

    for(const auto &a : ans) cout << a <<" ";
    cout << endl;
    
    return 0;
}
