#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main() {
    int nums[3] = {1,2,3};
    do{
        for(int i=0;i<3;i++) {
            cout << nums[i] << " ";
        }
        cout << endl;
    }while (next_permutation(nums,nums+3));
    
    return 0;
}