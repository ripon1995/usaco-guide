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

const int INF = INT_MAX;

int findIndex(string line,char ch1,char ch2) {
    line.pop_back();
    int ind1 = line.find_last_of(ch1);
    int ind2 = line.find_last_of(ch2);
    if(ind1 == line.npos)ind1 = INF ;
    if(ind2 == line.npos)ind2 = INF;
    int minIndex;
    if(ind1!=INF && ind2!=INF) {
        minIndex = max(ind1,ind2);
    }
    else {
        minIndex = min(ind1,ind2);
    }
    return minIndex;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int tc;
    cin >> tc;
    long long num;
    while(tc--) {
        cin >> num;
        int deleteFromLast = 0;
        int ans = INT_MAX;
        string line = to_string(num);
        
        for(int i=line.size();i>1;i--) {
            string restDigit = line.substr(0,i);
            pair<char,int> lastDigit = make_pair(restDigit.back(),restDigit.size()-1);
            int removeCount = 0;
            if(lastDigit.first == '0') {
                int minIndex = findIndex(restDigit,'0','5');
                if(minIndex != INF) {
                    removeCount = lastDigit.second - minIndex - 1;
                }
                else continue;
            }
            
            else if(lastDigit.first == '5') {
                int minIndex = findIndex(restDigit,'2','7');
                if(minIndex != INF) {
                    removeCount = lastDigit.second - minIndex - 1;
                }
                else {
                    continue;
                }
            }
            else {
                continue;
            }
            int currentRemove = removeCount+(line.size()-lastDigit.second-1);
            ans = min(ans,currentRemove);
        }
        cout << ans << endl;
    }
    return 0;
}
/// 7505
/// 50555