#include<vector>
#include<iostream>
#include<map>
#include<cmath>
#include<algorithm>
#include<stack>
#include<set>
#include<unordered_set>
#include<string>
#include<tuple>
using namespace std;

typedef vector<int>vi;
typedef vector<string>vs;
typedef map<int,vector<int> >mivi;
typedef pair<int,bool>pib;
typedef pair<int,int>pii;
typedef vector<pair<int,int> >vpii;
typedef map<int,int>mii;
typedef vector<vector<int> >vvi;
typedef vector< pair<char,pair<int,int> > > vpcpii;

void printAnsEven(int val) {
    cout << "1 * 2 = 2" << '\n';
    cout << "2 * 3 = 6" << '\n';
    cout << "6 * 4 = 24" << '\n';
    for(int i=5;i<val;i+=2) {
        cout << i+1 << " - " << i << " = 1" << '\n';
        cout << "24 * 1 = 24" << '\n';
    }
}

void printAnsOdd(int val) {
    cout << "5 * 4 = 20" << '\n';
    cout << "20 + 3 = 23" << '\n';
    cout << "23 + 2 = 25" << '\n';
    cout << "25 - 1 = 24" << '\n';
    for(int i=6;i<val;i+=2) {
        cout << i+1 << " - " << i << " = 1" << '\n';
        cout << "24 * 1 = 24" << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int val;
    cin >> val;
    vpcpii ans;
    if(val <= 3) {
        cout << "NO" << '\n';
    }
    else {
        cout << "YES" << '\n';
        if(val%2==0) {
            printAnsEven(val);
        }
        else {
            printAnsOdd(val);
        }
    }
    
    return 0;
}
