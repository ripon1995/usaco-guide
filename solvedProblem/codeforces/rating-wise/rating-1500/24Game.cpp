#include<vector>
#include<iostream>
#include<map>
#include<cmath>
#include<algorithm>
#include<stack>
#include<set>
#include<unordered_set>
#include<string>
#include<tuple>
using namespace std;

typedef vector<int>vi;
typedef vector<string>vs;
typedef map<int,vector<int> >mivi;
typedef pair<int,bool>pib;
typedef pair<int,int>pii;
typedef vector<pair<int,int> >vpii;
typedef map<int,int>mii;
typedef vector<vector<int> >vvi;
typedef vector< pair<char,pair<int,int> > > vpcpii;

vpcpii getAnswerForFour(int val) {
    vi data;
    data.push_back(4);
    data.push_back(3);
    data.push_back(2);
    data.push_back(1);
    vpcpii ans;
    while(data.size()>1) {
        int last = data.back();
        data.pop_back();
        int secondLast = data.back();
        data.pop_back();
        ans.push_back(make_pair('*', make_pair(last,secondLast)));
        data.push_back(last * secondLast);
    }

    return ans;
}

vpcpii getAnswerForFive(int val) {
    vi data;
    data.push_back(1);
    data.push_back(2);
    data.push_back(3);
    data.push_back(4);
    data.push_back(5);
    vpcpii ans;

    int last = data.back();
    data.pop_back();
    int secondLast = data.back();
    data.pop_back();
    ans.push_back(make_pair('*', make_pair(last,secondLast)));
    data.push_back(last*secondLast);
    
    last = data.back();
    data.pop_back();
    secondLast = data.back();
    data.pop_back();
    ans.push_back(make_pair('+', make_pair(last,secondLast)));
    data.push_back(last + secondLast);
    
    last = data.back();
    data.pop_back();
    secondLast = data.back();
    data.pop_back();
    ans.push_back(make_pair('+', make_pair(last,secondLast)));
    data.push_back(last + secondLast);
    
    last = data.back();
    data.pop_back();
    secondLast = data.back();
    data.pop_back();
    ans.push_back(make_pair('-', make_pair(last,secondLast)));
    data.push_back(last - secondLast);
    
    return ans;
}

void printAns(vpcpii ans) {
    for(auto a : ans) {
        int f = a.second.first;
        int s = a.second.second;
        char sign = a.first;
        if(sign == '+') {
            cout << f << " " << sign << " " << s << " = " << f + s << '\n';  
        }
        else if(sign == '-') {
            cout << f << " " << sign << " " << s << " = " << f - s << '\n';
        }
        else if(sign == '*') {
            cout << f << " " << sign << " " << s << " = " << f * s << '\n';
        }
    }
}


vpcpii getAnswerForEven(int val) {
    vi data;
    for(int i=1;i<=val;i++) {
        data.push_back(i);
    }
    vpcpii ans;
    while(data.size()>4) {
        int last = data.back();
        data.pop_back();
        int secondLast = data.back();
        data.pop_back();
        ans.push_back(make_pair('-',make_pair(last,secondLast)));
        data.push_back(last - secondLast);

        last = data.back();
        data.pop_back();
        secondLast = data.back();
        data.pop_back();
        ans.push_back(make_pair('*', make_pair(last,secondLast)));
        data.push_back(last * secondLast);
    }
    vpcpii forFour = getAnswerForFour(4);
    for(auto ff : forFour) {
        ans.push_back(ff);
    }

    return ans;
}

vpcpii getAnswerForOdd(int val) {
    vi data;
    for(int i=1;i<=val;i++) {
        data.push_back(i);
    }
    vpcpii ans;
    while(data.size()>5) {
        int last = data.back();
        data.pop_back();
        int secondLast = data.back();
        data.pop_back();
        ans.push_back(make_pair('-',make_pair(last,secondLast)));
        data.push_back(last - secondLast);

        last = data.back();
        data.pop_back();
        secondLast = data.back();
        data.pop_back();
        ans.push_back(make_pair('*', make_pair(last,secondLast)));
        data.push_back(last * secondLast);
    }

    vpcpii forFive = getAnswerForFive(5);
    for(auto ff : forFive) {
        ans.push_back(ff);
    }

    return ans;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int val;
    cin >> val;
    vpcpii ans;
    if(val <= 3) {
        cout << "NO" << '\n';
    }
    else {
        cout << "YES" << '\n';
        if(val%2==0) {
            ans = getAnswerForEven(val);
        }
        else {
            ans = getAnswerForOdd(val);
        }
    }
    printAns(ans);
    return 0;
}
