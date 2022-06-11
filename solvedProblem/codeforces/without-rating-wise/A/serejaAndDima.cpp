#include<bits/stdc++.h>
using namespace std;

typedef vector<int>vi;
typedef vector<string>vs;
typedef map<int,int> mii;
typedef map<string,int> msi;
typedef map<string,string>mss;
typedef map<int,pair<int,int>> mipii;
typedef map<int,vector<int>> mivi;
typedef pair<string,int>psi;
typedef set<string>ss;

bool cmp(int a,int b) {
    return a>b;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int val;
    cin >> val;
    vi cards(val);
    for(auto& c:cards) {
        cin >> c;
    }
    int serejasPoint = 0;
    int dimasPoint = 0;
    int i=0;
    int j=cards.size()-1;
    bool serejasTurn = true;
    int point = 0;
    while(i<=j) {

        if(cards[i] > cards[j]) {
            point = cards[i];
            i++;
        }
        else {
            point = cards[j];
            j--;
        }


        if(serejasTurn==true) {
            serejasPoint += point;
            serejasTurn = false;
        }
        else {
            dimasPoint += point;
            serejasTurn = true;
        }
    }

    cout << serejasPoint << " " << dimasPoint << endl;

    return 0;
}
