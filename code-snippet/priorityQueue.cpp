#include<bits/stdc++.h>
using namespace std;

int main()
{
    // default priority queue is a max priority queue
    priority_queue<int>maxPriorityQueue;
    maxPriorityQueue.push(10);
    maxPriorityQueue.push(20);
    maxPriorityQueue.push(30);
    
    cout << maxPriorityQueue.top() << endl;
    // to get min priority queue
    priority_queue<int,vector<int>,greater<int>>minPriorityQueue;
    minPriorityQueue.push(10);
    minPriorityQueue.push(20);
    minPriorityQueue.push(30);

    cout << minPriorityQueue.top() << endl;

    return 0;
}