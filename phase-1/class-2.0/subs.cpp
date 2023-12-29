#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;

// continuous parts
void print_sub_arrays(int arr[], int size) {
    for(int l=0;l<size;l++) {
        for(int r=l;r<size;r++) {
            for(int k=l;k<=r;k++) {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}

// just mathematical sets
void print_sub_sets(int arr[], int size) {
    for(int mask=0;mask<(1<<size);mask++) {
        for(int i=0;i<size;i++) {
            if((mask>>i) & 1) {
                cout << arr[i] << " ";
            }
        }
        
        cout << endl;
    }
}

int main() {
    int arr[5] = {1,2,3,4,5};

    // print_sub_arrays(arr,5);

    print_sub_sets(arr,5);


    return 0;
}