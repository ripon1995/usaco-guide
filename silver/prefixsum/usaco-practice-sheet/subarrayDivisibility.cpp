#include<iostream>
#include<vector>
#include<map>
using namespace std;

void fromUsaco() {
    int n;
	cin >> n;

	vector<long long int>prefixSum(n,0);
    long long int sum = 0;
    prefixSum[0] = 1;
    for(int i=0;i<prefixSum.size();i++) {
        int val;
        cin >> val;
        sum += val;
        prefixSum[(sum%n + n)%n]++;
    }

    long long int ans = 0;
    for(auto p : prefixSum) {
        cout << p << " ";
        ans += (p * (p-1))/2;
    }
    cout << ans << endl;
}

void method2() {
    int n;
    cin >> n;
    vector<int>data(n,0);
    vector<long long int>prefixSum;
    for(auto &d : data) {
        cin >> d;
    }
    prefixSum.push_back(data.front());

    for(int i=1;i<data.size();i++) {
        prefixSum.push_back(data[i]+prefixSum.back());
    }

    for(auto &p : prefixSum) {
        p %= n;
        if(p < 0) {
            p += n;
        }
        p %= n;
    }
    map<long long,long long>countItem;
    countItem[0] = 1;
    for(const auto &p : prefixSum) {
        countItem[p]++;
    }
    long long int ans = 0;
    for(const auto &c : countItem) {
        // cout << c.first << " => " << c.second << endl;
        ans += (c.second * (c.second - 1))/2;
    }
    cout << ans << endl;
}

int main() {
    
    method2();
    return 0;
}

/*
5
3 1 2 7 4
*/