#include<bits/stdc++.h>
using namespace std;

typedef vector<int>vi;
typedef map<int,int> mii;
typedef map<string,int> msi;
typedef map<string,string>mss;
typedef unordered_map<int,int>umii;
typedef map<int,pair<int,int>> mipii;
typedef map<int,vector<int>> mivi;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc;
    cin >> tc;
    int val;
    while(tc--) {
        cin >> val;
        vi package(val);
        for(int i=0;i<val;i++) {
            cin >> package[i];
        }

        mii uniquePackage;
        int length = 0;
        int maxLength = INT_MIN;
        int startIndex = 0;
        while(startIndex<package.size()) {
            int cur = package[startIndex];
            if(uniquePackage.count(cur)) {
                int temp = startIndex;
                startIndex = uniquePackage[cur]+1;
                uniquePackage[cur] = temp;
                maxLength = max(maxLength,length);
                length = 0;
                uniquePackage.clear();
            }
            else {
                uniquePackage[cur] = startIndex;
                length++;
                startIndex++;
            }
        }
        maxLength = max(maxLength,length);
        cout << maxLength << endl;
    }
    
    return 0;
}