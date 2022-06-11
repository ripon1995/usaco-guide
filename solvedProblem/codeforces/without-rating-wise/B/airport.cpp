#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int>pii;
typedef vector<int> vi;
typedef vector<pair<int,int>>vpii;
typedef map<char,int>mci;
typedef stack<char>stc;
typedef queue<char>qc;

int getMaxProfit(vi seats,int n) {
    priority_queue<int>maxProfitableSeats;
    for(auto s:seats) {
        maxProfitableSeats.push(s);
    }

    int maxProfit = 0;
    for(int i=1;i<=n;i++) {
        int presentSeat = maxProfitableSeats.top();
        maxProfitableSeats.pop(); 
        maxProfit += presentSeat;
        maxProfitableSeats.push(presentSeat-1);
    }

    return maxProfit;
}

int getMinProfit(vi seats , int n) {
    priority_queue<int, vi, greater<int>>minProfitableSeats;
    for(auto s:seats) {
        minProfitableSeats.push(s);
    }
    
    int minProfit = 0;
    for(int i=1;i<=n;i++) {
        int presentSeat = minProfitableSeats.top();
        minProfitableSeats.pop();
        minProfit += presentSeat;
        if(presentSeat>1) {
            minProfitableSeats.push(presentSeat-1);
        }
    }

    return minProfit;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n,m;
    cin >> n >> m;
    vi seats(m);
    for(int i=0;i<m;i++) {
        cin >> seats[i];
    }

    cout << getMaxProfit(seats,n) << " " << getMinProfit(seats,n) << '\n';
    return 0;
}
