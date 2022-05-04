#include<bits/stdc++.h>
using namespace std;

vector<pair<int,bool>> convertToVector(int n) {
    vector<pair<int,bool>>vpii;
    string numToString = to_string(n);
    for(int i=0;i<numToString.length();i++) {
        vpii.push_back(make_pair(numToString.at(i)-'0',false));
    }
    return vpii;
}

bool check(vector<pair<int,bool>>vpii) {
    set<int>s;
    bool allVisited = true;
    for(auto v:vpii) {
        s.insert(v.first);
        if(v.second == false) {
            allVisited = false;
            break;
        }
    }
    
    if(s.size()==vpii.size() && allVisited == true) {
        return true;
    }
    return false;
}


bool isRunAround(int n) {
    vector<pair<int,bool>>vpii = convertToVector(n);
    int index = 0;
    while(vpii.at(index).second == false) {
        vpii[index].second = true;
        index = (index + vpii.at(index).first) % vpii.size();
    }
    
    if(index == 0 && check(vpii) == true) {
        return true;
    } 

    return false;
}


int getRunNumber(int n) {
    int i = n;
    for(i=n;;i++) {
        if(isRunAround(i)) {
            break;
        }
    }
    return i;
}

int sols[9999999],N;

int main() {
	for(int i = 9876543; i > 9; i--) {
		if(isRunAround(i)) sols[i] = i;
		else sols[i] = sols[i + 1];
	}
	for(int T = 1;; T++) {
		scanf("%d", &N);
		if(N == 0) break;
		printf("Case %d: %d\n", T, sols[N]);
	}
}