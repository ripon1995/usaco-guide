#include<bits/stdc++.h>
using namespace std;


vector<int>subset;

void search(int n,int k) {
    if(k==n) {
        for(auto s:subset) {
            cout << s << " ";
        }
        cout << endl;
    }
    else {
        search(n,k+1);
        subset.push_back(k);
        search(n,k+1);
        subset.pop_back();
    }
}

void generateSubsets(int k,vector<int>data,int n) {
    if(k==n) {
        for(auto s:subset) {
            cout << s <<" ";
        }
        cout << endl;
    }
    else {
        generateSubsets(k+1,data,n);
        subset.push_back(data[k]);
        generateSubsets(k+1,data,n);
        subset.pop_back();
    }
}

void generateSubsets2(int k,vector<int>data,int n) {
    if(k==n) {
        for(auto s:subset) {
            cout << s <<" ";
        }
        cout << endl;
    }
    else {
        subset.push_back(data[k]);
        generateSubsets2(k+1,data,n);
        subset.pop_back();
        generateSubsets2(k+1,data,n);
    }
}


int main()
{
    //search(3,0);
    vector<int> data = {1,2,3};
    generateSubsets(0,data,3);
    cout << endl << endl;
    generateSubsets2(0,data,3);
    return 0;
}