#include<iostream>
#include<vector>
#include<map>
#include<climits>
#include<algorithm>
using namespace std;

const int INT_MAX_SPACE = 400001;

vector<pair<int,int> >intervals;
bool isCmp(pair<int,int>A, pair<int,int>B) {
    if(A.first == B.first) {
        return A.second < B.second;
    }
    return A.first < B.first;
}

void getIndividualTime(vector<pair <int,int> >intervals, int &minElement) {
    intervals.push_back(make_pair(intervals.back().second,1));

    int right = 0;
    for(int i=0;i<intervals.size()-1;i++) {
        auto cur = intervals[i];
        auto next = intervals[i+1];
        int current = min(next.first,cur.second) - max(cur.first,right);
        minElement = min(minElement,current);
        right = max(cur.second,right);
    }
}

long long getTotalTime(vector<pair<int,int> >intervals) {
    int left = 0, right = 0;
    long long totalTime = 0;
	for (int i = 0; i < intervals.size(); i++) {
		if (intervals[i].second > right) {
			left = max(right, intervals[i].first);
			totalTime += intervals[i].second - left;
			right = intervals[i].second;
		}
	}
    return totalTime;
}

int main() {
    // freopen("lifeguards.in", "r", stdin);
	// freopen("lifeguards.out", "w", stdout);
    int n;
    cin >> n;
    for(int i=0;i<n;i++) {
        int l,r;
        cin >> l >> r;
        intervals.push_back(make_pair(l,r));
    }
    sort(intervals.begin(),intervals.end(), isCmp);

    long long totalTime = getTotalTime(intervals);

    int minElement = totalTime;
    getIndividualTime(intervals,minElement);
    cout << totalTime - max(minElement,0) << endl;
}


/*
3
5 9
1 4
3 7
*/