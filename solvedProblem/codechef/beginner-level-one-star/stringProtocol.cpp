#include<bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int n;
        cin >> n;
        string line;
        getline(cin,line);
        getline(cin,line);

        int timeCount = 0;
        while(line.length()>0) {
            char last = line.back();
            line.pop_back();
            if(last == line.back()) {
                line.pop_back();
            }

            timeCount++;
        }
        cout << timeCount << endl;
    }
    return 0;
}