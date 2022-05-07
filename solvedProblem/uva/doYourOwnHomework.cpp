#include<bits/stdc++.h>
using namespace std;

typedef vector<int>vi;
typedef map<int,int> mii;
typedef map<string,int> msi;
typedef map<string,string>mss;
typedef map<int,pair<int,int>> mipii;
typedef map<int,vector<int>> mivi;
typedef pair<string,int>psi;


int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc;
    cin >> tc;
    int caseNo = 1;
    while(tc--) {
        int assignment;
        cin >> assignment;
        string assignmentDetails;
        int timeForAssignment;
        msi assignmentData;
        for(int i=0;i<assignment;i++) {
            cin >> assignmentDetails >> timeForAssignment;
            assignmentData[assignmentDetails] = timeForAssignment;
        }
        int allotedDay;
        cin >> allotedDay;
        string dueSubject;
        cin >> dueSubject;
        if(assignmentData.count(dueSubject)==0) {
            cout << "Case "<<caseNo++<<": " << "Do your own homework!" << endl;
        }
        else {
            if(assignmentData[dueSubject] <=allotedDay) {
                cout << "Case "<<caseNo++<<": " << "Yesss" << endl;
            }
            else if(assignmentData[dueSubject]>allotedDay && assignmentData[dueSubject]<=allotedDay+5) {
                cout << "Case "<<caseNo++<<": " << "Late" << endl;
            }
            else {
                cout << "Case "<<caseNo++<<": " << "Do your own homework!" << endl;
            }
        }
    }    
    return 0;
}
