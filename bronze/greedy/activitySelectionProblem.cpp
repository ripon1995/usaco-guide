/*
Problem 1 . Activity Selection Problem
Problem Statement :
Given N activities with their start and finish day given in array start[ ] and end[ ]. Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a given day.
Note : Duration of the activity includes both starting and ending day.
*/

#include<iostream>
#include<vector>
using namespace std;

bool cmp(pair<int,int>p,pair<int,int>q) {
    if(p.second == q.second) {
        return p.first < q.first;
    }
    return p.second < q.second;
}

int main() {
    int startTime[6] = {0,1,3,5,8,5};
    int endTime[6] = {6,2,4,7,9,9};
 
    vector<pair<int,int> > jobs;
    for(int i=0;i<6;i++) {
        jobs.push_back(make_pair(startTime[i],endTime[i]));
    }
    sort(jobs.begin(),jobs.end(),cmp);

    int count = 1;
    int prev = 0;
    vector<pair<int,int> > selectedJobs;
    for(int i=1;i<jobs.size();i++) {
        if(jobs[i].first>=jobs[prev].second) {
            count++;
            selectedJobs.push_back(make_pair(jobs[prev].first,jobs[prev].second));
            prev = i;
        }
    }

    selectedJobs.push_back(make_pair(jobs[prev].first,jobs[prev].second));

    cout << "Task completed : " << count << endl;
    cout << "Task details : " << endl;
    for(const auto& t : selectedJobs) {
        cout << "Start time : " << t.first << "\t" << "End time : " << t.second << endl;
    }
    return 0;
}