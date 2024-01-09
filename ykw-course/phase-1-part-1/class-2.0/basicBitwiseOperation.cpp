// basic operations of bit

#include<iostream>
using namespace std;

int multiply_by_2(int x, int k) {
    return (x << k);
}

int divide_by_2(int x, int k) {
    return (x >> k);
}

int check_kth_setbit(int x, int k) {
    return (x>>k) & 1;
}

void find_on_bits(int x) {
    for(int k=0;k<32;k++) {
        if(check_kth_setbit(x,k)) {
            cout << k << " ";
        }
    }
}

void find_off_bits(int x) {
    for(int k=0;k<32;k++) {
        if(!check_kth_setbit(x,k)) {
            cout << k << " ";
        }
    }
}

int count_on_bits(int x) {
    int count = 0;
    for(int k=0;k<32;k++) {
        if(check_kth_setbit(x,k)) {
            count++;
        }
    }
    return count;
}

bool check_even(int x) {
    // even number holds 0 in the last bit
    // 10 = 1010
    // 6 = 110
    // 5 = 101
    if(x&1) {
        return false;
    }

    return false;
}

int turn_on_kth_bit(int x,int k) {
    return x | (1 << k);
}

int turn_off_kth_bit(int x, int k) {
    return x & (~(1<<k));
}

int toggle_kth_bit(int x, int k) {
    return x ^ (1 << k);
}

bool is_power_of_2(int x) {
    if(count_on_bits(x) == 1) {
        return true;
    }

    return false;
}

int find_kth_power_of_2(int k) {
    return (1<<k);
}
int main() {
    // cout << check_kth_setbit(11,2) << endl;
    // find_on_bits(11);
    // find_off_bits(11);
    // cout << count_on_bits(11) << endl;
    // cout << check_even(5) << endl;
    // cout << turn_on_kth_bit(11,2);
    // cout << turn_off_kth_bit(11,1);
    // cout << toggle_kth_bit(5,1);
    // cout << is_power_of_2(30) << endl;
    // cout << find_kth_power_of_2(4);
    return 0;
}