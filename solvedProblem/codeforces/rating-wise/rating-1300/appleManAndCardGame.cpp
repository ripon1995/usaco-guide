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
typedef vector<pair<int,int> >vpii;
typedef map<int,int>mii;
typedef map<char,int>mci;
typedef vector<vector<int> >vvi;
typedef vector< pair<char,pair<int,int> > > vpcpii;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin >> n >> k;
    string line;
    getline(cin,line);
    getline(cin,line);

    mci alphabet;
    for(int i=0;i<line.length();i++) {
        alphabet[line[i]]++;
    }
    vi data;
    for(auto a : alphabet) {
        data.push_back(a.second);
    }
    sort(data.begin(),data.end());
    long long int coinCount = 0;
    while(k>0) {
        if(k>=data.back()) {
            coinCount += ((long long int)data.back() * data.back());
            k -= data.back(); 
        }
        else {
            coinCount += ((long long int)k * k);
            k -= k;
        }
        data.pop_back();
    }
    cout << coinCount << endl;
    return 0;
}
