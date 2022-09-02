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

bool isValidCell(int row,int col,int x,int y,vs data) {
    if(x<0 || x>=row) return false;
    if(y<0 || y>=col) return false;

    if(data[x][y]=='W') {
        return true;
    }

    return false;
}

pair<int,int> isPossibleToEat(int row,int col,int x,int y,vs data) {
    int dx[4] = {-1,0,1,0};
    int dy[4] = {0,-1,0,1};

    int newX = -1;
    int newY = -1;
    for(int i=0;i<4;i++) {
        newX = x + dx[i];
        newY = y + dy[i];

        if(isValidCell(row,col,newX,newY,data)) {
            return make_pair(newX,newY);
        }
    }
    newX = -1;
    newY = -1;
    return make_pair(newX,newY);
}

int solve(vs data) {
    int possibleToEat = 0;
    for(int i=0;i<data.size();i++) {
        for(int j=0;j<data[i].length();j++) {
            if(data[i][j]=='P') {
                auto dd = isPossibleToEat(data.size(),data.front().length(),i,j,data);
                if(dd.first!=-1 && dd.second!=-1) {
                    possibleToEat++;
                    data[dd.first][dd.second] = '.';
                }
            }
        }
    }
    return possibleToEat;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int row,col;
    cin >> row >> col;
    vs data(row);
    for(auto &d : data) {
        cin >> d;
    }
    cout << solve(data) << endl;
    return 0;
}
