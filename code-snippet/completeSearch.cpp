#include<bits/stdc++.h>
using namespace std;
typedef map<int,int>mii;
typedef map<char,int>mci;


void permutation(vector<int>numbers) {
    do {
        for(auto n:numbers) {
            cout << n << "\t";
        }
        cout << endl;
    }while(next_permutation(numbers.begin(),numbers.end()));
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int>numbers = {1,2,3};
    permutation(numbers);
    return 0;
}   