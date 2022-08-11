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

bool isValid(int r,int c,vector<vector<int> >matrix,int data) {
    bool oneFoundInRow = false;
    for(int i=0;i<matrix[0].size();i++) {
        if(matrix[r][i]==1) {
            oneFoundInRow = true;
            break;
        }
    }

    bool oneFoundInCol = false;
    for(int i=0;i<matrix.size();i++) {
        if(matrix[i][c]==1) {
            oneFoundInCol = true;
            break;
        }
    }
    if(data==0) {
        if(oneFoundInCol==false && oneFoundInRow==false) {
            return true;
        }
        else {
            return false;
        }
    }
    return oneFoundInCol|oneFoundInRow;
}

bool isCorrect(vector<vector<int> >matrixA,vector<vector<int> >matrixB) {
    for(int i=0;i<matrixB.size();i++) {
        for(int j=0;j<matrixB[i].size();j++) {
            bool cc = isValid(i,j,matrixA,matrixB[i][j]);
            if(!cc) {
                return false;
            }
        }
    }
    return true;
}

void updateMatrixA(int r,int c,vector<vector<int> >&matrixA) {
    for(int i=0;i<matrixA[0].size();i++) {
        matrixA[r][i] = 0;
    }
    for(int i=0;i<matrixA.size();i++) {
        matrixA[i][c] = 0;
    }
}

vector<vector<int> > generateAMatrix(vector<vector<int> >matrixB) {
    vector<vector<int> >matrixA(matrixB.size(),vector<int>(matrixB[0].size(),1));
    for(int i=0;i<matrixB.size();i++) {
        for(int j=0;j<matrixB[i].size();j++) {
            if(matrixB[i][j]==0) {
                updateMatrixA(i,j,matrixA);
            }
        }
    }
    return matrixA;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    int row,col;
    cin >> row >> col;
    vector<vector<int> >matrixB(row,vector<int>(col,0));
    for(auto &mm : matrixB) {
        for(auto &m : mm) cin >> m;
    }

    
    vector<vector<int> >matrixA;
    matrixA = generateAMatrix(matrixB);
    bool isBMatrixCorrect = isCorrect(matrixA,matrixB);
    if(isBMatrixCorrect) {
        cout << "YES" << endl;
        for(const auto ma : matrixA) {
            for(const auto m : ma) {
                cout << m << " ";
            }
            cout << endl;
        }
    }
    else {
        cout << "NO" << endl;
    }
    
    return 0;
}
