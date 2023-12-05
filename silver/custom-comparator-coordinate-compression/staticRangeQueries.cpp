#include<iostream>
#include<vector>
#include<map>
#include<climits>
#include<algorithm>
using namespace std;

const int INT_MAX_SPACE = 400001;

vector<pair<pair<int,int>,int> >updates;
vector<pair<int,int> >query;
vector<int> intervals;
vector<long long> differenceArray(INT_MAX_SPACE,0);
vector<long long> intervalValue(INT_MAX_SPACE,0);
vector<int> widths(INT_MAX_SPACE,0);
vector<long long> prefixSum(INT_MAX_SPACE,0);

int getCompressedIndex(int a) {
    return lower_bound(intervals.begin(), intervals.end(), a) - intervals.begin();
}

int main() {

    ios::sync_with_stdio(false);

    int N,Q;
    cin >> N >> Q;
    for(int i=0;i<N;i++) {
        int l,r,v;
        cin >> l >> r >> v;
        intervals.push_back(l);
        intervals.push_back(r);
        updates.push_back(make_pair(make_pair(l,r),v));
    }

    for(int i=0;i<Q;i++) {
        int l,r;
        cin >> l >> r;
        intervals.push_back(l);
        intervals.push_back(r);
        query.push_back(make_pair(l,r));
    }

    // co-ordinate compression start
    sort(intervals.begin(),intervals.end());
    intervals.erase(unique(intervals.begin(), intervals.end()), intervals.end());
    // co -ordinate compression end

    // difference array start
    for(const auto &u : updates) {
        differenceArray[getCompressedIndex(u.first.first) + 1] += u.second;
        differenceArray[getCompressedIndex(u.first.second) + 1] -= u.second;
    }
    // difference array end

    // interval array start
    for(int i=1;i<intervals.size();i++) {
        intervalValue[i] = intervalValue[i-1] + differenceArray[i];
    }
    // interval array end

    // interval widths start
    for(int i=1;i<intervals.size();i++) {
        widths[i] = intervals[i] - intervals[i-1];
    }
    // interval widths end

    for(int i=1;i<intervals.size();i++) {
        prefixSum[i] = prefixSum[i-1] + (widths[i] * intervalValue[i]);
    }
    // cout << "indices : ";
    // for(auto i : indices) cout << i << "\t";
    // cout << endl;
    // cout << "IV : ";
    // for(int i=0;i<15;i++) cout << intervalValue[i] << "\t";
    // cout << endl;
    // cout << "WF : ";
    // for(int i=0;i<15;i++) cout << widths[i] << "\t";
    // cout << endl;
    // cout << "PF : ";
    // for(int i=0;i<15;i++) cout << prefixSum[i] << "\t";
    // cout << endl;

    for(const auto &q : query) {
        cout << prefixSum[getCompressedIndex(q.second)] - prefixSum[getCompressedIndex(q.first)] << '\n';
    }

}


/*
5 5
3 7 2
1 10 4
1 6 10
0 4 10
6 7 1
5 7
0 2
5 9
1 6
4 9
*/