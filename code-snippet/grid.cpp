#include<bits/stdc++.h>
using namespace std;
typedef map<int,int>mii;
typedef map<char,int>mci;
typedef map<string,int>msi;
typedef pair<int,int>pii;
const int MATRIX_LIM = 3;

bool isValidCell(int row,int col) {
    if(row < 0 || row >= MATRIX_LIM || col < 0 || col >= MATRIX_LIM) {
        return false;
    }
    return true;
}

vector<pii> cell() {
    vector<pii>adjacentCell;
    adjacentCell.push_back(make_pair(0,0));
    adjacentCell.push_back(make_pair(-1,0));
    adjacentCell.push_back(make_pair(-1,1));
    adjacentCell.push_back(make_pair(0,1));
    adjacentCell.push_back(make_pair(1,1));
    adjacentCell.push_back(make_pair(1,0));
    adjacentCell.push_back(make_pair(1,-1));
    adjacentCell.push_back(make_pair(0,-1));
    adjacentCell.push_back(make_pair(-1,-1));
    return adjacentCell;
}

void updateMatrix(int i,int j,vector<vector<int>>& mat) {
    vector<pii>adjacentCell = cell();
    for(auto c:adjacentCell) {
        int newRow = i+c.first; int newCol = j+c.second;
        if(isValidCell(newRow,newCol) == true) {
            if(mat[newRow][newCol] == 1) mat[newRow][newCol] = 0;
            else if(mat[newRow][newCol] == 0) mat[newRow][newCol] = 1;
        }
    }
}

void print(vector<vector<int>>mat) {
    for(auto mm:mat) {
        for(auto m:mm) {
            cout << m;
        }
        cout << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<vector<int>>mat(MATRIX_LIM,vector<int>(MATRIX_LIM,1));

    int val;
    for(int i=0;i<MATRIX_LIM;i++) {
        for(int j=0;j<MATRIX_LIM;j++) {
            cin >> val;
            if(val%2==1) {
                updateMatrix(i,j,mat);
            }
        }
    }
    print(mat);
    return 0;
}
