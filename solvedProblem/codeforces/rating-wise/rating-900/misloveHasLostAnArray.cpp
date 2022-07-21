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

vi generateArray(int diff,int n,bool minArray) {
    vi data;
    data.push_back(1);
    diff--;
    while(diff > 0) {
        data.push_back(data.back()*2);
        diff--;
    }
    sort(data.begin(),data.end());

    while(data.size()<n) {
        if(minArray) data.push_back(data.front());
        else data.push_back(data.back());
    }
    
    return data;
}

long long sum(vi data) {
    long long s = 0;
    for(const auto &d : data) {
        s += d;
    }
    return s;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,l,r;
    cin >> n >> l >> r;
    vi minimumNumbers = generateArray(l,n,true);
    //for(const auto &mn : minimumNumbers) cout << mn << " ";
    //cout << endl << endl;
    vi maximumNumbers = generateArray(r,n,false);
    //for(const auto &mn : maximumNumbers) cout << mn << " ";
    long long minSum = sum(minimumNumbers);
    long long maxSum = sum(maximumNumbers);
    cout << minSum << " " << maxSum << endl;
    return 0;
}

