#include<iostream>
#include<vector>
#include<map>
#include<cmath>
#include<algorithm>
using namespace std;

typedef vector<int>vi;
typedef map<int,vector<int> >mivi;
typedef pair<int,bool>pib;


int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    int val;
    cin >> val;
    map<int,int> students;
    int data;
    for(int i=0;i<val;i++) {
        cin >> data;
        if(data == 4) {
            students[4]++;
        }
        else if(data == 3) {
            if(students.count(1)) {
                students[1]--;
                students[4]++;
                if(students[1]==0)students.erase(1);
            }
            else {
                students[3]++;
            }
        }
        else if(data == 2) {
            if(students.count(2)) {
                students[4]++;
                students[2]--;
                if(students[2]==0) {
                    students.erase(2);
                }
            }
            else {
                students[2]++;
            }
        }
        else if(data == 1) {
            if(students.count(3)) {
                students[4]++;
                students[3]--;
                if(students[3]==0)students.erase(3);
            }
            else {
                students[1]++;
            }
        }
    }
    
    int taxiCount = 0;

    taxiCount += students[4];
    taxiCount += students[3];

    (students.count(2)) ? taxiCount += ceil((double)(students[1]+2)/4) : taxiCount += ceil((double)students[1]/4);

    cout << taxiCount << endl;
    return 0;
}