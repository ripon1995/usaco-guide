#include<vector>
#include<iostream>
#include<map>
#include<cmath>
#include<algorithm>
#include<stack>
#include<set>
#include<unordered_set>
#include<string>
using namespace std;

typedef vector<int>vi;
typedef vector<string>vs;
typedef map<int,vector<int> >mivi;
typedef pair<int,bool>pib;
typedef pair<int,int>pii;
typedef vector<pair<int,int> >vpii;

pii getIndexToBeChanged(string line) {
    vi data;
    int start = 0;
    int end = line.length() - 1;
    while(start < end) {
        if(line.at(start) != line.at(end)) {
            data.push_back(start);
        }
        start++;
        end--;
    }
    sort(data.begin(),data.end());
    if(data.size()==0) {
        return make_pair(-1,-1);
    }
    return make_pair(data.front(),data.back());
}

pii indexSequenceToMove(pii index,int cursor) {
    int left = abs(index.first - cursor);
    int right = abs(index.second - cursor);
    pii data;
    if(left <= right) {
        return index;
    }
    pii p = make_pair(index.second,index.first);
    return p;
}
int getMoveCount(int cursorPosition,int targetIndex,string &line) {
    int moveCount = 0;
    while(cursorPosition != targetIndex) {
        int currentIndex = line.length()-1-cursorPosition;
        if(line.at(cursorPosition) != line.at(currentIndex)) {
            int fd = abs((int)line.at(cursorPosition) - (int)line.at(currentIndex));
            int bd = 26 - fd;
            moveCount += min(fd,bd);
            line.at(currentIndex) = line.at(cursorPosition);
        }
        if(cursorPosition < targetIndex) {
            cursorPosition++;
        }
        else cursorPosition--;
        moveCount++;
    }

    if(line.at(cursorPosition) != line.at(line.length()-1-cursorPosition)) {
        int fd = abs((int)line.at(cursorPosition) - (int)line.at(line.length()-1-cursorPosition));
        int bd = 26 - fd;
        line.at(line.length()-1-cursorPosition) = line.at(cursorPosition);
        moveCount += min(fd,bd);
    }

    return moveCount;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int len,cursorPosition;
    cin >> len >> cursorPosition;
    if(cursorPosition > len/2) {
        cursorPosition = len - cursorPosition + 1;
    }
    cursorPosition--;
    string line;
    getline(cin,line);
    getline(cin,line);
    pii indexToChange = getIndexToBeChanged(line);
    int moveCount = 0;
    if(indexToChange.first != -1 && indexToChange.second != -1) {
        pii sequence = indexSequenceToMove(indexToChange,cursorPosition);
    
        moveCount += getMoveCount(cursorPosition,sequence.first,line);

        moveCount += getMoveCount(sequence.first,sequence.second,line);
    }
    cout << moveCount << endl;
    
    return 0;
}

