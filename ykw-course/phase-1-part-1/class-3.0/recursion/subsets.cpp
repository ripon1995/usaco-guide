#include<iostream>
#include<cmath>
#include<string>
using namespace std;

// all are false value by default
bool is_taken[3];

void traverse_nums(int ind,int size,int nums[]) {
    if(ind>=size) {
        return;
    }
    cout << nums[ind] << " ";
    traverse_nums(ind+1,size,nums);
}

void print_set(int size, int nums[]) {
    for(int i=0;i<size;i++) {
        if(is_taken[i]==true) {
            cout << nums[i] << " ";
        }
    }
    cout << endl;
}

void sub_set(int ind,int size,int nums[]) {
    if(ind>=size) {
        print_set(size,nums);
        return;
    }
    // not taken so false value set
    is_taken[ind] = false;
    sub_set(ind+1,size,nums);

    // taken so true value set
    is_taken[ind] = true;
    sub_set(ind+1,size,nums);
 }

int main() {
    int nums[3] = {1,2,3};
    // traverse_nums(0,5,nums);
    sub_set(0,3,nums);
    return 0;
}