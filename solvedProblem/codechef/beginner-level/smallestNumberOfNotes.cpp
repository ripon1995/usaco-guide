#include<iostream>
#include<vector>

using namespace std;

int main() {

    int tc;
    cin >> tc;
    while(tc--) {
        int val;
        cin >> val;
        
        vector<int>notes;
        notes.push_back(1);
        notes.push_back(2);
        notes.push_back(5);
        notes.push_back(10);
        notes.push_back(50);
        notes.push_back(100);

        int noteCount = 0;
        while(val > 0) {
            if(val>=notes.back()) {
                noteCount += val/notes.back();
                val = val % notes.back();
            }
            notes.pop_back();
        }
        cout << noteCount << '\n';
    }

    return 0;
}