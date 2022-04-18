#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc;
    cin >> tc;
    while(tc--) {
        int databaseSize;
        multimap<string,pair<int,int>>database;
        cin >> databaseSize;
        string company;
        int lowest,highest;
        for(int i=0;i<databaseSize;i++) {
            cin >> company >> lowest >> highest;
            database.insert(make_pair(company,make_pair(lowest,highest))); //make_pair(lowest,highest);
        }

        vector<string>maker;
        int query;
        cin >> query;
        int price;
        for(int i=1;i<=query;i++) {
            cin >> price;
            for(auto d:database) {
                if(d.second.first<=price && d.second.second>=price) {
                    maker.push_back(d.first);
                }
            }
            if(maker.size()==1) {
                cout << maker[0] << endl;
            }
            else {
                cout << "UNDETERMINED" << endl;
            }
            maker.clear();
        }
        if(tc != 0) {
            cout << endl;
        }
    }
    return 0;
}