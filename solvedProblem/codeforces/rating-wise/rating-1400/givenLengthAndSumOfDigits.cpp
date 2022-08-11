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

void debug(vi ans) {
    for(auto a : ans) {
        cout << a;
    }
    cout << endl;
}

vi largestNumber(int len,int sum) {
    vi ans;
    int S = sum;
    while(sum > 0) {
        if(sum >= 9) {
            ans.push_back(9);
            sum -= 9;
        }
        else {
            ans.push_back(sum);
            sum = 0;
        }
    }
    while(ans.size()>0 && ans.size()<len) {
        ans.push_back(0);
    }
    if(len==1 && S==0) {
        ans.push_back(0);
    }
    if(ans.size()>len) {
        ans.clear();
        ans.push_back(-1);
    }

    return ans;
}

vi smallestNumber(int len,int sum) {
    vi ans;
    int S = sum;
    while(sum > 0) {
        if(sum >= 9) {
            ans.push_back(9);
            sum -= 9;
        }
        else {
            ans.push_back(sum);
            sum = 0;
        }
    }
    
    bool isFirst = true;
    while(ans.size()>0 && ans.size()<len) {
        if(isFirst) {
            ans.back()--;
            ans.push_back(1);
            isFirst = false;
        }
        else {
            ans.push_back(0);
        }
    }
    sort(ans.begin(),ans.end());
    if(!ans.empty() && ans.front()==0) {
        for(int i=1;i<ans.size();i++) {
            if(ans[i]!=0) {
                swap(ans[0],ans[i]);
                break;
            }
        }
    }
    if(len==1 && S==0) {
        ans.push_back(0);
    }
    if(ans.size()>len) {
        ans.clear();
        ans.push_back(-1);
    }

    return ans;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int len,sum;
    cin >> len >> sum;
    vi maxNum = largestNumber(len,sum);
    vi minNum = smallestNumber(len,sum);
    if(minNum.empty() && maxNum.empty()) {
        cout << "-1 -1" << endl;
    }
    for(const auto &mn : minNum) cout << mn;
    cout <<" ";
    for(const auto &mn : maxNum) cout << mn;
    return 0;
}
