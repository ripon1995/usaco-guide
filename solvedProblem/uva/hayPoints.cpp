#include<bits/stdc++.h>
using namespace std;

typedef vector<int>vi;
typedef vector<string>vs;
typedef map<int,int> mii;
typedef map<string,int> msi;
typedef map<string,string>mss;
typedef map<int,pair<int,int>> mipii;
typedef map<int,vector<int>> mivi;
typedef pair<string,int>psi;

psi getDicitonaryElement(string line) {
    int spaceIndex = line.find(' ');
    string key = line.substr(0,spaceIndex);
    string value = line.substr(spaceIndex+1);
    int v = stoi(value);
    return make_pair(key,v);
}

void generateWords(string line,vs& jobData) {
    int spaceIndex = line.find(' ');
    int startIndex = 0;
    while(spaceIndex != line.npos) {
        string word = line.substr(startIndex,spaceIndex-startIndex);
        if(word != " ") {
            jobData.push_back(word);
        }
        startIndex = spaceIndex+1;
        spaceIndex = line.find(' ',startIndex);
    }
    string word = line.substr(startIndex);
    if(word != " ") {
        jobData.push_back(word);
    }
}

int computedSalary(msi dictionary,vs jobData) {
    int salary = 0;
    for(auto j:jobData) {
        salary += dictionary[j];
    }
    return salary;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int dictionarySize,jobDescriptionSize;
    msi dictionary;
    string line;
    while(cin >> dictionarySize >> jobDescriptionSize) {
        getline(cin,line);
        for(int i=0;i<dictionarySize;i++) {
            getline(cin,line);
            psi d = getDicitonaryElement(line);
            dictionary[d.first] = d.second;
        }
        vs jobData;
        for(int i=0;i<jobDescriptionSize;i++) {
            while(getline(cin >> ws,line)) {
                if(line.at(0) == '.') {
                    cout << computedSalary(dictionary,jobData) << endl;
                    jobData.clear();
                    break;
                }
                generateWords(line,jobData);
            }

        }
        dictionary.clear();
    }
    return 0;
}
