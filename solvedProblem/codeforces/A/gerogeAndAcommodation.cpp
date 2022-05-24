#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int availableRoom = 0;
    int room,currentPeople,capacity;
    cin >> room;
    for(int i=0;i<room;i++) {
        cin >> currentPeople >> capacity;
        if(capacity-currentPeople >= 2) {
            availableRoom++;
        }
    }
    cout << availableRoom << endl;
    return 0;
}