#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;

void maximum_sum_sub_array_brute_force(int arr[], int size) {
    int max_sum = 0;
    for(int l=0;l<size;l++) {
        for(int r=l;r<size;r++) {
            int sum = 0;
            for(int i=l;i<=r;i++) {
                cout << arr[i] << " ";
                sum += arr[i];
            }
            cout << endl;
            max_sum = max(max_sum,sum);
        }
    }
    cout << "Max sum : " << max_sum << endl;
}

void maximum_sum_sub_array_order_n_square(int arr[], int size) {
    long long int max_sum = -1e18;
    for(int l=0;l<size;l++) {
        long long int  current_sum = 0;
        for(int r=l;r<size;r++) {
            current_sum += arr[r];
            max_sum = max(max_sum,current_sum);
        }
    }
    cout << max_sum << endl;
}

void maximum_sum_sub_array_order_n(int arr[], int size) {
    long long int max_sum = -1e18;
    long long int current_max_sum = -1e18;
    for(int i=0;i<size;i++) {
        current_max_sum = max(current_max_sum+arr[i], (long long int)arr[i]);
        max_sum = max(max_sum, current_max_sum);
    }

    cout << max_sum << endl;
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    maximum_sum_sub_array_order_n(arr,n);

    return 0;
}