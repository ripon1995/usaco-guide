#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string dna;
    cin >> dna;
    dna.push_back('#');
    int count = 1;
    int maxLen = -1;
    for(int i=1;i<dna.length();i++) {
        if(dna[i-1] == dna[i]) {
            count++;
        }
        else {
            maxLen = max(maxLen,count);
            count = 1;
        }
    }
    cout << maxLen << endl;
    return 0;
}