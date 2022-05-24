#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int>pii;

ll rectangleArea(pii a,pii b) {
    ll len = abs(a.first - b.first);
    ll wid = abs(a.second - b.second);
    return len * wid; 
}

pair<pii,pii> intersectedCoordinates(pii a,pii b,pii c,pii d) {
    int x1 = max(a.first,c.first);
    int y1 = max(a.second,c.second);
    int x2 = min(b.first,d.first);
    int y2 = min(b.second,d.second);

    // if not intersects
    if(x1 >= x2 || y1 >= y2) {
        return {
            {0,0},
            {0,0}
        };
    }

    // if intersects
    return {
        {x1,y1},
        {x2,y2}
    };
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<pii>points(6);
    for(int i=0;i<6;i++) {
        cin >> points[i].first >> points[i].second;
    }

    ll white = rectangleArea(points[0],points[1]);
    
    pair<pii,pii> wb1 = intersectedCoordinates(points[0],points[1],points[2],points[3]);
    pair<pii,pii> wb2 = intersectedCoordinates(points[0],points[1],points[4],points[5]);
    pair<pii,pii> intersectionOfWB1andWB2 = intersectedCoordinates(wb1.first,wb1.second,wb2.first,wb2.second);
    ll areaWB1 = rectangleArea(wb1.first,wb1.second);
    ll areaWB2 = rectangleArea(wb2.first,wb2.second);
    ll areaB1B2 = rectangleArea(intersectionOfWB1andWB2.first,intersectionOfWB1andWB2.second);

    if(white > areaWB1+areaWB2-areaB1B2) {
        cout << "YES" <<'\n';
    }
    else cout << "NO" <<'\n';
    return 0;
}