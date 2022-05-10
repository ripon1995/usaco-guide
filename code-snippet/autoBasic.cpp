#include<bits/stdc++.h>
using namespace std;


int main()
{
    //type 1: 

    // using auto we can access the data only in this code block.
    // in this codeblock we can read,write and update this.
    // but outside the loop it will remain same.
    // because here auto makes a copy of that value and does something on that local value.
    vector<int>data = {1,2,3};
    cout << "Type1: " << endl;
    cout << "Inside the block"<<endl;
    for(auto d:data) {
        cout << d << endl; // reading inside the block
        d += 10; // updating inside the block
        cout << d << endl; // reading the updated value;
    }
    /// but outside the loop data will remain same because that was a local change.
    cout << "Outside the block" << endl;
    cout << data[0] << " " << data[1] << " " << data[2];
    cout << endl << endl;

    //type 2:
    cout << "Type2: " << endl;
    cout << "Inside the block: ";
    for(const auto d:data) {
        cout << d << endl; // reading data
        // d += 10; this will be wrong becase auto is modified with const. That means it is constant type auto.
                    // we cannot change it in this block. Just the read mode is enabled. This reduce the risk
                    // of accidental value change. 
    }
    /// so outside the loop data will remain same.
    cout << "Outside the block" << endl;
    cout << data[0] << " " << data[1] << " " << data[2];
    cout << endl << endl;

    // type 3: if we want to take control on the vector like read write update option
    cout << "Type 3" << endl;
    cout << "Inside the block: ";
    for(auto& d : data) {
        cout << d << endl; // reading data
        d += 10; // updating data. as reference(&) is used with auto so this will change the value in the vector.
        cout << d << endl; // reading data
    }
    cout << "Outside the block" << endl;
    cout << data[0] << " " << data[1] << " " << data[2];

    return 0;
}