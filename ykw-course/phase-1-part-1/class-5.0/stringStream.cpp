#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<vector>
#include<iomanip>
#include<set>
#include<sstream>
using namespace std;


// get all words in a sentence
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string line;
    getline(cin,line);
    stringstream lineStream(line);
    string word;
    while(lineStream >> word) {
        cout << word << endl;
    }
    return 0;
}