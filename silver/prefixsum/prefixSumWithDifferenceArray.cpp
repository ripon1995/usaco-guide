/*
concept : Difference array with prefix sum
Update range in one dimensional array in order(1) time
source link : https://www.geeksforgeeks.org/difference-array-range-update-query-o1/
*/

#include<iostream>
#include<vector>
using namespace std;

typedef vector<int> vi;

void updateRange(vi &differenceArray, int l,int r,int val) {
	differenceArray[l] += val;
	if(r+1 < differenceArray.size()) differenceArray[r+1] -= val;
}

vi printUpdatedArr(vi givenArr, vi differenceArr) {
	givenArr[0] = differenceArr[0];
	// prefix sum operation
	for(int i=1;i<givenArr.size();i++) {
		givenArr[i] = givenArr[i-1] + differenceArr[i];
	}
	return givenArr;
}

int main() {
	// given array
	vi arr;
	arr.push_back(10);
	arr.push_back(5);
	arr.push_back(20);
	arr.push_back(40);
	
	// create difference array
	// first item will be the first item of the given array
	vi diffrenceArray;
	diffrenceArray.push_back(arr.front());
	for(int i=1;i<arr.size();i++) {
		diffrenceArray.push_back(arr[i] - arr[i-1]);
	}

	updateRange(diffrenceArray, 0,1,10);
	updateRange(diffrenceArray,1,3,20);
	updateRange(diffrenceArray,2,2,30);

	vi ans = printUpdatedArr(arr,diffrenceArray);
	for(auto a : ans) cout << a << " ";

	return 0;
}