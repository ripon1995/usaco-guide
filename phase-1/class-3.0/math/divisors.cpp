#include<iostream>
#include<cmath>
#include<string>
using namespace std;

void divisors_of_n(int n) {
    for(int i=1;i<=n;i++) {
        if(n%i==0) {
            cout << i << " ";
        }
    }
}

// globally declared to set all indexes value to zero
const int N = 1e7+5;
int divisors[N];
void divisors_till_n(int n) {
    for(int i=1;i<=n;i++) {
        for(int j=i;j<=n;j+=i) {
            divisors[j]++;
        }
    }

    for(int i=1;i<=n;i++) {
        cout << divisors[i] << " ";
    }
}

int main() {
    
    int n = 10;
    divisors_till_n(n);
    return 0;
}