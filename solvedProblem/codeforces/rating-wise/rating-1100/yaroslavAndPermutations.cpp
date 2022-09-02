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


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int val;
    map<int,int> freq;
    for(int i=0;i<n;i++) {
        cin >> val;
        freq[val]++;
    }

    vector<int> data;
    for(const auto &f : freq) {
        data.push_back(f.second);
    }

    int maxElement = *max_element(data.begin(),data.end());
    int others = 0;
    for(int i=0;i<data.size();i++) {
        others += data[i];
    }
    others -= maxElement;
    if(abs(maxElement - others)<=1 || others > maxElement) {
        cout << "YES" << endl;
    } 
    else {
        cout << "NO" << endl;
    }
    return 0;
}
