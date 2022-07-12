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

int findMin(set<int>s) {
    if(s.empty()) return 0;
    vi data;
    for(auto ss : s) {
        data.push_back(ss);
    }
    sort(data.begin(),data.end());
    for(int i=0;i<data.size();i++) {
        if(data[i] != i) {
            return i;
        }
    }
    return data.back()+1;
}

bool shouldInsertIntoA(set<int> s,int val) {
    if(s.empty()) return true;
    vi data;
    for(auto ss : s) {
        data.push_back(ss);
    }
    sort(data.begin(),data.end());
    if(val-data.back() == 1) return true;
    return false;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int tc;
    cin >> tc;
    while(tc--) {
        int num;
        cin >> num;
        vi nums(num);
        for(auto &n : nums) {
            cin >> n;
        }
        sort(nums.begin(),nums.end());
    
        set<int>a,b;
        for(const auto &n : nums) {
            bool insertIntoA = shouldInsertIntoA(a,n);
            if(a.count(n)==0 && insertIntoA==true) {
                a.insert(n);
            }
            else {
                b.insert(n);
            }
        }
        int ans = findMin(a) + findMin(b);
        cout << ans << endl;
    }
    return 0;
}

