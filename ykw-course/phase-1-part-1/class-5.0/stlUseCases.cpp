#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<numeric>
#include<iomanip>
#include<sstream>

#include<stack>
#include<queue>
#include<map>
#include<vector>
#include<set>
using namespace std;

void sort_points_by_distance_from_origin() {
    int n;
    cin >> n;
    vector<pair<double,pair<int,int> > > points;
    for(int i=0;i<n;i++) {
        int x,y;
        cin >> x >> y;
        double distance = sqrt(x*x + y*y);
        points.push_back(make_pair(distance,make_pair(x,y)));
    }

    sort(points.begin(),points.end());

    for(auto p : points) {
        cout << p.second.first << " " << p.second.second << endl;
    }
}

void sort_strings_lexicographically() {
    vector<string>lines;
    int n;
    cin >> n;
    for(int i=0;i<n;i++) {
        string line;
        cin >> line;
        lines.push_back(line);
    }

    sort(lines.begin(),lines.end());
    for(auto l : lines) {
        cout << l << endl;
    }
}

void balanced_bracket() {
    string line;
    cin >> line;
    stack<char>st;
    for(auto l : line) {
        if(l=='(') {
            st.push(l);
        }
        else {
            if(st.empty()) {
                cout << "Not balanced" << endl;
                return;
            }
            st.pop();
        }
    }

    if(st.empty()) {
        cout << "Balanced" << endl;
    }
    else {
        cout << "Not balanced" << endl;
    }
}

void sliding_window_techinque() {
    int n,k;
    cin >> n >> k;
    vector<int>nums(n);
    for(auto &num : nums) {
        cin >> num;
    }

    queue<int>window;
    int sum = 0;
    for(int i=0;i<n;i++) {
        auto num = nums[i];
        window.push(num);
        sum += num;
        if(i>=k-1) {
            cout << sum << " ";
            sum -= window.front();
            window.pop();
        }
    }
    cout << endl;
    
}

void kth_smallest_in_each_prefix() {
    int n,k;
    cin >> n >> k;
    vector<int>nums(n);
    for(auto &num : nums) {
        cin >> num;
    }

    priority_queue<int>max_priority_queue;
    for(int i=0;i<n;i++) {
        max_priority_queue.push(nums[i]);
        if(max_priority_queue.size()>k) {
            max_priority_queue.pop();
        }

        if(i>=k-1) {
            cout << max_priority_queue.top() << " ";
        }
    }
}

void number_of_unique_elements_each_prefix() {
    int n;
    cin >> n;
    vector<int>nums(n);
    for(auto &num : nums) {
        cin >> num;
    }
    

    set<int>unique_elements;
    for(auto n : nums) {
        unique_elements.insert(n);
        cout << unique_elements.size() << endl;
    }
}

void remove_one_occurances_from_an_array() {
    vector<int>a(5);
    vector<int>b(3);
    for(auto &d : a) {
        cin >> d;
    }
    for(auto &d : b) {
        cin >> d;
    }

    multiset<int>s;
    for(auto d : a) {
        s.insert(d);
    }

    for(auto d : b) {
        auto it = s.find(d);
        if(it != s.end()) {
            s.erase(it);
        }
    }

    cout << s.size() << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    remove_one_occurances_from_an_array();

    return 0;
}
