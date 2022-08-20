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

void startWithBoy(int n,int m,vector<bool>& ans) {
    while(n>0 && m>0) {
        ans.push_back(false);
        ans.push_back(true);
        n--;
        m--;
    }

    while(n>0) {
        ans.push_back(false);
        n--;
    }
}

void startWithGirl(int n,int m,vector<bool>& ans) {
    while(n>0 && m>0) {
        ans.push_back(true);
        ans.push_back(false);
        m--;
        n--;
    }
    while(m>0) {
        ans.push_back(true);
        m--;
    }
}

int main() {

    freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
    int n,m;
    cin >> n >> m;
    vector<bool>ans;
    if(n > m) {
        startWithBoy(n,m,ans);
    }
    else {
        startWithGirl(n,m,ans);
    }

    for(const auto &a : ans) {
        cout << (a==true ? "G" : "B");
    }
    return 0;
}
