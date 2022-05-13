#include<bits/stdc++.h>
using namespace std;

typedef vector<int>vi;
typedef map<int,int> mii;
typedef map<string,int> msi;
typedef map<string,string>mss;
typedef map<int,pair<int,int>> mipii;
typedef map<int,vector<int>> mivi;
typedef pair<string,int>psi;

bool isCourseName(string line) {
    for(const auto& l : line) {
        if(l >= 'a' && l <= 'z') {
            return false;
        }
    }
    return true;
}

bool multipleCourse(map<string,set<string>>course,string name) {
    int count = 0;
    for(const auto& c : course) {
        if(c.second.count(name) != 0) {
            count++;
        }
    }
    if(count == 1) {
        return true;
    }
    return false;
}

bool cmp(pair<string,int>a , pair<string,int>b) {
    if(a.second == b.second) {
        return a.first < b.first;
    }
    return a.second > b.second;
}

vector<pair<string,int>> summarize(map<string,set<string>>& course, set<string>students) {
    for(const auto& s : students) {
        bool mCourseList = multipleCourse(course,s);
        if(mCourseList == false) {
            for(auto& c : course) {
                c.second.erase(s);
            }
        }
    }

    vector<pair<string,int>>result;
    for(const auto& c : course) {
        result.push_back(make_pair(c.first,c.second.size()));
    }
    sort(result.begin(),result.end(),cmp);
    return result;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string line;
    map<string,set<string>> course;
    set<string>students;
    string currentCourseName;
    while(getline(cin,line)) {
        if(line.at(0) == '0') {
            break;
        }
        // clear data
        else if(line.at(0) == '1') {
            vector<pair<string,int>> result = summarize(course,students);
            for(const auto& r:result) {
                cout << r.first << " " << r.second << endl;
            }
            course.clear();
            students.clear();
            continue;
        }
        

        if(isCourseName(line) == true) {
            currentCourseName = line;
            course[currentCourseName];
        }
        else {
            course[currentCourseName].insert(line);
            students.insert(line);
        }
    }


    return 0;
}
