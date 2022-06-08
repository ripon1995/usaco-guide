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


int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
        
    int two,three,five,six;
    cin >> two >> three >> five >> six;
    
    int minCountOf256 = min(two,min(five,six));
    
    two -= minCountOf256;
    five -= minCountOf256;
    six -= minCountOf256;

    int minCountOf32 = min(two,three);
    
    long long result = (minCountOf256 * 256) + (minCountOf32 * 32);
    cout << result << endl;
    
    return 0;
}