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

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int val;
    cin >> val;
    vi numbers(val);

    long long int sum = 0;
    for(auto &n : numbers) {
        cin >> n;
        sum += n;
    }
    sort(numbers.begin(),numbers.end());
    reverse(numbers.begin(),numbers.end());
    long long int totalSum = sum;
    while(numbers.size()>=2) {
        sum += totalSum;
        totalSum -= numbers.back();
        numbers.pop_back();
    }
    cout << sum << endl;
    return 0;
}
