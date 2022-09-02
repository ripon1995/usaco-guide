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

bool compare(pair<int,int>A,pair<int,int>B) {
    if(A.second == B.second) {
        return A.first > B.first;
    }
    return A.second > B.second;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<pair<int,int> > cards(n);
    for(auto &c : cards) {
        cin >> c.first >> c.second;
    }
    sort(cards.begin(),cards.end(),compare);
    reverse(cards.begin(),cards.end());
    int counter = 1;
    int totalScore = 0;
    while(counter>0) {
        if(cards.empty())break;
        totalScore += cards.back().first;
        counter += cards.back().second;
        counter--;
        cards.pop_back();
    }
    cout << totalScore << endl;
    return 0;
}
