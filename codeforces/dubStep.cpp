#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    string line;
    string result = "";
    getline(cin,line);
    
    int firstIndex=line.find("WUB");
    int secondIndex = -2;
    while(firstIndex != line.npos) {
        if(firstIndex != 0 && secondIndex == -2) {
            result += line.substr(0,firstIndex);
            result += " ";
        }
        secondIndex = line.find("WUB",firstIndex+1);
        int firstCharToBeCopied = firstIndex+3;
        int len = secondIndex - firstCharToBeCopied;
        string sub = line.substr(firstCharToBeCopied,len);

        // this block checks substring is not empty
        if(sub.length()!=0) {
            result += sub;
            result += " ";   
        }
        firstIndex = secondIndex;
    }

    // if the whole line does not contain the WUB
    if(result.length()==0) {
        result = line;
    }
    cout << result << '\n';
    return 0;
}
