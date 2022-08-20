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

long long int fact(int start,int end) {
    long long int ans = 1;
    for(int i=start;i<=end;i++) {
        ans *= i;
    }
    ans /= 6;
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,d;
    cin >> n >> d;
    vi numbers(n);
    for(auto &n : numbers) {
        cin >> n;
    }

    // calculate segments
    long long int toFind;
    long long int toFindIndex;
    long long int elementCount=0;
    vector<pair<int,int> > segments;
    vector<long long int>segmentAns;
    for(int i=0;i<numbers.size();i++) {
        toFind = numbers[i] + d;
        toFindIndex = upper_bound(numbers.begin(),numbers.end(),toFind)-numbers.begin();
        elementCount = toFindIndex-i;
        if(elementCount >= 3) {
            segments.push_back(make_pair(i,toFindIndex-1)) ;
            long long int ans = fact(elementCount-2,elementCount);
            segmentAns.push_back(ans);
        }
    }


    // calculate ans from the segments
    long long int totalAns = 0;
    if(segmentAns.size()!=0) {
        totalAns = segmentAns.front();
    }
    for(int i=1;i<segments.size();i++) {
        //cout << segments[i].first << " " << segments[i].second << " ===> " << segmentAns[i] << endl;
        pair<int,int> currentSegment = segments[i];
        pair<int,int> previousSegment = segments[i-1];

        // if overlap found
        if(currentSegment.first < previousSegment.second) {
            int overLapelementCount = abs(previousSegment.second - currentSegment.first) + 1;
            if(overLapelementCount>=3) {
                long long int ans = fact(overLapelementCount-2,overLapelementCount);
                totalAns -= ans;
            }
        }
        totalAns += segmentAns[i];
    }
    cout << totalAns << endl;
    return 0;
}
