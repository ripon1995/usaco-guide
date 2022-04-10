#include<bits/stdc++.h>
using namespace std;



void findMethodBasic() {
    string message = "Long live bangladesh";
    // string.find() method returns if the matching element is found. Otherwise -1 returned

    int foundIndex = message.find("live");
    if(foundIndex == -1) {
        cout << "Matching element is not found" << endl;
    }
    else {
        cout << "Matching element is found at : " << foundIndex << endl;
    }

    // we can reduce hardcoded -1
    // that means message.npos is equal to -1
    message = "Long live baangladesh";
    if(message.find("live") == message.npos) {
        cout << "Matching element is not found" << endl;
    }
    else {
        cout << "Matching element is found at : " << foundIndex << endl;
    }
}


void patternCount(string line) {
    int i=line.find("OMG");
    while(i != line.npos) {
        cout << "Index: " << i << endl;
        i = line.find("OMG",i+1);
    }
}

int main()
{
    string line = "longOMGliveOMGBangladeshOMG";
    patternCount(line);
    return 0;
}