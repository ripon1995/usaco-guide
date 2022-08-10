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


/*
0 1 2 3 4
5 4 3 2 1
*/

int inversionCount = 0;

void merge(vi &data,int left,int mid,int right) {
    int leftSubArraySize = mid - left + 1;
    int rightSubArraySize = right - mid;

    vi leftSubArray;
    for(int i=0;i<leftSubArraySize;i++) {
        leftSubArray.push_back(data[left + i]);
    }
    vi rightSubArray;
    for(int i=0;i<rightSubArraySize;i++) {
        rightSubArray.push_back(data[mid+1+i]);
    }

    int leftSubArrayIndex = 0;
    int rightSubArrayIndex = 0;
    int mergedArrayIndex = left;

    while(leftSubArrayIndex < leftSubArraySize && rightSubArrayIndex < rightSubArraySize) {
        if(leftSubArray[leftSubArrayIndex] <= rightSubArray[rightSubArrayIndex]) {
            data[mergedArrayIndex] = leftSubArray[leftSubArrayIndex];
            leftSubArrayIndex++;
        }
        else {
            data[mergedArrayIndex] = rightSubArray[rightSubArrayIndex];
            rightSubArrayIndex++;
            inversionCount++;
        }

        mergedArrayIndex++;
    }

    while(leftSubArrayIndex < leftSubArraySize) {
        data[mergedArrayIndex++] = leftSubArray[leftSubArrayIndex++];
    }

    while(rightSubArrayIndex < rightSubArraySize) {
        data[mergedArrayIndex++] = rightSubArray[rightSubArrayIndex++];
    }

}


void mergeSort(vi &data, int left,int right) {
    if(left >= right) return;
    int mid = left + (right-left)/2;
    mergeSort(data,left,mid);
    mergeSort(data,mid+1,right);
    merge(data,left,mid,right);
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    vi data;
    data.push_back(2);
    data.push_back(3);
    data.push_back(1);
    data.push_back(5);
    data.push_back(4);
    mergeSort(data,0,data.size()-1);

    for(const auto &d : data) cout << d << " ";
    cout << inversionCount << endl;
    return 0;
}
