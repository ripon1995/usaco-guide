/*
this article is only for rectangle which are parallel to axes
*/

// here given two points. bottomLeft point and topRight point;

#include<bits/stdc++.h>
using namespace std;

struct Point {
    int x,y;
};

int area(Point TR,Point BL) {
    int len = TR.x - BL.x;
    int wid = TR.y - BL.y;
    return len * wid;
}

int main() {
    Point bottomLeft,topRight;
    bottomLeft.x = 6;
    bottomLeft.y = 0;
    topRight.x = 10;
    topRight.y = 4;

    cout << area(topRight,bottomLeft) << endl;

    return 0;
}
