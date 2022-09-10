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

bool isPossible(vi cowbells,int bags,long long current) {
    for(const auto &c : cowbells) {
        if(c>current) {
            return false;
        }
    }
    int i=0;
    int counter = 0;
    int j = cowbells.size()-1;
    while(i <= j) {
        if(cowbells[i]+cowbells[j]<=current) {
            i++;
            j--;
        }
        else {
            j--;
        }
        counter++;
    }
    if(counter<=bags) {
        return true;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int bell,bags;
    cin >> bell >> bags;
    vi cowbells(bell);
    long long sum = 0;
    for(auto &c : cowbells) {
        cin >> c;
        sum += c;
    }

    long long lo = cowbells.front();
    long long hi = sum;
    long long ans = INT_MAX;
    while(lo <= hi) {
        long long current = (lo+hi)/2;
        if(isPossible(cowbells,bags,current)) {
            hi = current-1;
            ans = min(ans,current);
        }
        else {
            lo = current+1;
        }
    }

    cout << ans << endl;
    return 0;
}
