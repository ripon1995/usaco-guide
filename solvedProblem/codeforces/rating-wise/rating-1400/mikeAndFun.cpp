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

int countContinuousOneInARow(vector<int>grid) {
    int continuousOneCount = 0;
    vi temp;
    temp.push_back(grid.front());
    int counter = 0;
    if(temp.front()==1) {
        counter++;
    }
    for(int i=1;i<grid.size();i++) {
        if(temp.back()==1 && grid[i]==1) {
            counter++;
        }
        else {
            continuousOneCount = max(continuousOneCount,counter);
            (grid[i]==1) ? counter = 1 : counter = 0;
        }
        temp.push_back(grid[i]);
    }
    continuousOneCount = max(continuousOneCount,counter);
    return continuousOneCount;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int row,col,query;
    cin >> row >> col >> query;
    vector<vector<int> > grid(row,vector<int>(col));
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            cin >> grid[i][j];
        }
    }

    vector<int> res;
    for(int i=0;i<grid.size();i++) {
        auto a = countContinuousOneInARow(grid[i]);
        res.push_back(a);
    }
    
    for(int i=1;i<=query;i++) {
        int r,c;
        cin >> r >> c;
        grid[r-1][c-1] = !grid[r-1][c-1];
        res[r-1] = countContinuousOneInARow(grid[r-1]);
        
        int ans = *max_element(res.begin(),res.end());
        cout << ans << '\n';
    }
    return 0;
}
