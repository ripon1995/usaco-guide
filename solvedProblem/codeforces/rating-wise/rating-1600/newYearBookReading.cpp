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
typedef vector<pair<int,int> >vpii;
typedef map<int,int>mii;

bool cmp(pii A,pii B) {
    return A.second < B.second;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int b,d;
    cin >> b >> d;
    vi weights(b);
    vi days(d);
    for(auto &w : weights) {
        cin >> w;
    }
    for(auto &d : days) {
        cin >> d;
    }
    mii booksWithOrder;
    for(int i=0;i<days.size();i++) {
        if(booksWithOrder.count(days[i])) {
            continue;
        }
        booksWithOrder[days[i]] = i+1;
    }
    vpii data;
    for(const auto &b : booksWithOrder) {
        data.push_back(make_pair(b.first,b.second));
    }
    sort(data.begin(),data.end(),cmp);
    reverse(data.begin(),data.end());
    stack<int>bookStack;
    for(auto d : data) {
        bookStack.push(d.first);
    }

    int ans = 0;
    for(const auto &d : days) {
        if(bookStack.top()==d) continue;
        vi weightToLift;
        while(!bookStack.empty()) {
            if(bookStack.top()==d) {
                bookStack.pop();
                break;
            }
            weightToLift.push_back(bookStack.top());
            bookStack.pop();
        }
        
        for(auto w : weightToLift) {
            ans += weights[w-1];
        }
        while(weightToLift.size()>0) {
            bookStack.push(weightToLift.back());
            weightToLift.pop_back();
        }
        bookStack.push(d);
    }
    cout << ans << endl;
    return 0;
}

