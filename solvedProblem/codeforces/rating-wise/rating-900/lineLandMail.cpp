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

long long int getDistance(int a,int b) {
    return abs(a-b);
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int len;
    cin >> len;
    int d;
    vi data;
    for(int i=0;i<len;i++) {
        cin >> d;
        data.push_back(d);
    }
    vector<pair<long long,long long> >distance;
    long long minDistance,maxDistance;
    for(int i=0;i<data.size();i++) {
        if(i==0) {
            minDistance = getDistance(data[i],data[i+1]);
            maxDistance = getDistance(data[i],data.back());
        }
        else if(i==data.size()-1) {
            minDistance = getDistance(data[i],data[i-1]);
            maxDistance = getDistance(data[i],data.front());
        }
        else {
            minDistance = min(getDistance(data[i-1],data[i]),getDistance(data[i],data[i+1]));
            maxDistance = max(getDistance(data[i],data.front()),getDistance(data[i],data.back()));
        }

        distance.push_back(make_pair(minDistance,maxDistance));
    }
    for(const auto &d : distance) {
        cout << d.first << " " << d.second << '\n';
    }
    return 0;
}