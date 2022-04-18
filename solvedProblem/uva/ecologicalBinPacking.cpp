#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int b1,g1,c1,b2,g2,c2,b3,g3,c3;
    while(cin>>b1>>g1>>c1>>b2>>g2>>c2>>b3>>g3>>c3) {
        if(cin.eof())break;
        vector<int>data = {b1,g1,c1,b2,g2,c2,b3,g3,c3};
        map<char,vector<int>>bins;
        vector<char>colors = {'B','G','C'};
        int val;
        int c=0;
        for(int i=0;i<9;i++) {
            bins[colors[i%3]].push_back(data[c++]);
        }

        sort(colors.begin(),colors.end());
        string color = "";
        for(auto c:colors) {
            color += c;
        }
        int minimumMove = INT_MAX;
        string res = "";
        do {
            int moveFromFirstBin = bins[color[1]][0]+bins[color[2]][0];
            int moveFromSecondBin = bins[color[0]][1]+bins[color[2]][1];
            int moveFromThirdBin = bins[color[0]][2]+bins[color[1]][2]; 

            int presentMove =  moveFromFirstBin + moveFromSecondBin + moveFromThirdBin;
        
            if(presentMove < minimumMove) {
                minimumMove = presentMove;
                res = color;
            }
        }while(next_permutation(color.begin(),color.end()));

        cout << res << " " << minimumMove << endl;
    }
    return 0;
}
