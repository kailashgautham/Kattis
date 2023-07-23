#include"bits/stdc++.h"
using namespace std;
int square(){
    float x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    float dist1 = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    float dist2 = sqrt((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3));
    float dist3 = sqrt((x1-x3)*(x1-x3) + (y1-y3)*(y1-y3));
    float dist = ((dist1==dist2) || (dist2==dist3))? dist2 : dist1;
    int x,y;
    if(dist==dist1&&dist==dist2){
        x = ((x1 + x3) / 2)*2 - x2;
        y=((y1 + y3) / 2)*2 - y2;
    } else if(dist==dist1&&dist==dist3){
         x = ((x2 + x3) / 2)*2 - x1;
         y=((y2 + y3) / 2)*2 - y1;
    } else {
         x = ((x2 + x1) / 2)*2 - x3;
         y=((y2 + y1) / 2)*2 - y3;
    }
    cout<<x<<" "<<y;
}

