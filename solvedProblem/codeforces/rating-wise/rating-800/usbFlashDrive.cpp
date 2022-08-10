#include<iostream>
#include<vector>
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
    cin.tie(0);

    int n,fileSize;
    cin >> n >> fileSize;
    vi usb(n);
    for(auto &u : usb) {
        cin >> u;
    }
    sort(usb.begin(),usb.end());
    int driveCount = 0;
    while(fileSize > 0) {
        fileSize -= usb.back();
        usb.pop_back();
        driveCount++;
    }
    cout << driveCount << endl;
    return 0;
}
