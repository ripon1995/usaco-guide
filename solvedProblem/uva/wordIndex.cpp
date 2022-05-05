#include<bits/stdc++.h>
using namespace std;


typedef map<string,int> msi;

string letter = "abcdefghijklmnopqrstuvwxyz";

msi singleLetters(msi data) {
    for(int i=0;i<letter.length();i++) {
        string temp = "";
        temp += letter[i];
        data[temp] = data.size()+1;
    }
    return data;
}

msi doubleLetters(msi data) {
    for(int i=0;i<letter.length();i++) {
        for(int j=i+1;j<letter.length();j++) {
            string temp = "";
            temp += letter[i];
            temp += letter[j];
            data[temp] = data.size()+1;
        }
    }
    return data;
}

msi trippleLetters(msi data) {
    for(int i=0;i<letter.length();i++) {
        for(int j=i+1;j<letter.length();j++) {
            for(int k=j+1;k<letter.length();k++) {
                string temp = "";
                temp += letter[i];
                temp += letter[j];
                temp += letter[k];
                data[temp] = data.size()+1;
            } 
        }
    }
    return data;
}


msi tetraLetters(msi data) {
    for(int i=0;i<letter.length();i++) {
        for(int j=i+1;j<letter.length();j++) {
            for(int k=j+1;k<letter.length();k++) {
                for(int l=k+1;l<letter.length();l++) {
                    string temp = "";
                    temp += letter[i];
                    temp += letter[j];
                    temp += letter[k];
                    temp += letter[l];
                    data[temp] = data.size()+1;
                }
            } 
        }
    }
    return data;
}


msi pentaLetters(msi data) {
    for(int i=0;i<letter.length();i++) {
        for(int j=i+1;j<letter.length();j++) {
            for(int k=j+1;k<letter.length();k++) {
                for(int l=k+1;l<letter.length();l++) {
                    for(int m=l+1;m<letter.length();m++) {
                        string temp = "";
                        temp += letter[i];
                        temp += letter[j];
                        temp += letter[k];
                        temp += letter[l];
                        temp += letter[m];
                        data[temp] = data.size() + 1;
                    }
                }
            } 
        }
    }
    return data;
}


int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    msi data;
    data = singleLetters(data);
    data = doubleLetters(data);
    data = trippleLetters(data);
    data = tetraLetters(data);
    data = pentaLetters(data);

    string line;
    while(cin >> line) {
        if(cin.eof()) {
            break;
        }
        cout << data[line] << endl;
    }

    return 0;
}

