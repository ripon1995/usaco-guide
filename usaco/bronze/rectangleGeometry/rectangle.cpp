// rectangular should be parallel to the co ordinate axis
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;

int area(pii TR,pii BL) {
    int len = abs(TR.first - BL.first);
    int wid = abs(TR.second - BL.second);
    return len * wid;
}

bool rectangleIntersects(pii TR1,pii BL1,pii TR2,pii BL2) {
    if(TR1.second <= BL2.second || BL1.second >= TR2.second || BL1.first >= TR2.first || TR1.first <= BL2.first) {
        return false;
    }
    return true;
}

int intersectedArea(pii TRA,pii BLA,pii TRB,pii BLB) {
    int len = abs(min(TRA.first,TRB.first) - max(BLA.first,BLB.first));
    int wid = abs(min(TRA.second,TRB.second) - max(BLA.second,BLB.second));
    return len * wid;
}

pair<pii,pii> intersectedCoordinates(pii tra,pii bla,pii trb,pii blb) {
    int x1 = max(bla.first,blb.first);
    int y1 = max(bla.second,blb.second);
    int x2 = min(tra.first,trb.first);
    int y2 = min(tra.second,trb.second);
    if(x1 >= x2 || y1 >= y2) {
        return {{0,0},{0,0}};
    }
    return {{x1,y1},{x2,y2}};
}

int main() {
    pii tr1,bl1,tr2,bl2;
    cin >> bl1.first >> bl1.second >> tr1.first >> tr1.second;
    cin >> bl2.first >> bl2.second >> tr2.first >> tr2.second;

    pair<pii,pii>data = intersectedCoordinates(tr1,bl1,tr2,bl2);
    cout << data.first.first << " " << data.first.second << endl;
    cout << data.second.first << " "<< data.second.second << endl; 

    return 0;
}
