#include<bits/stdc++.h>
using namespace std;

typedef vector<int>vi;
typedef map<int,int> mii;
typedef map<string,int> msi;
typedef map<string,string>mss;
typedef map<int,pair<int,int>> mipii;
typedef map<int,vector<int>> mivi;
typedef pair<string,int>psi;


mss convertStringToDictionary(string line) {
    mss dictionary;
    if(line.length()<=2) {
        return dictionary;
    }
    char c = ',';
    int startIndex = 1;
    int index= line.find(",");
    while(index != line.npos) {
        string data = line.substr(startIndex,index-startIndex);
        int colonIndex = data.find(':');
        string key = data.substr(0,colonIndex);
        string value = data.substr(colonIndex+1);
        dictionary[key] = value;
        startIndex = index+1;
        index = line.find(c,index+1);
    }
    string data = line.substr(startIndex);
    data.pop_back();
    int colonIndex = data.find(':');
    string key = data.substr(0,colonIndex);
    string value = data.substr(colonIndex+1);
    dictionary[key] = value;
    return dictionary;
}


void printAns(char sign,set<string>ans) {
    cout << sign;
    int c = 1;
    for(auto a:ans) {
        cout << a;
        if(c < ans.size()) {
            cout << ",";
        }
        c++;
    }
    cout << endl;
}


int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc;
    cin >> tc;
    string oldDictionary,newDictionary;
    while(tc--) {
        cin >> oldDictionary >> newDictionary;
        mss oldDic = convertStringToDictionary(oldDictionary);
        mss newDic = convertStringToDictionary(newDictionary);
        set<string>added;
        set<string>removed;
        set<string>updated;
        if(newDic.size()!=0) {
            for(auto n:newDic) {
            //new added
            if(oldDic.count(n.first)==0) {
                added.insert(n.first);
            }
            else if(oldDic.count(n.first) != 0) {
                //update
                if(oldDic[n.first] != n.second) {
                    updated.insert(n.first);
                }
            }
        }
        }
        //removed check
        if(oldDic.size()!=0) {
            for(auto o:oldDic) {
                if(newDic.count(o.first) == 0) {
                    removed.insert(o.first);
                }
            }
        }

        if(added.size()==0 && removed.size()==0 && updated.size()==0) {
            cout << "No changes" << endl;
        }
        else {
            if(added.size()!=0) printAns('+',added);
            if(removed.size()!=0) printAns('-',removed);
            if(updated.size()!=0) printAns('*',updated);
        }
        cout << endl;
    }  
    return 0;
}
