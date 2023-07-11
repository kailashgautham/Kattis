#include"bits/stdc++.h"
using namespace std;
int santaklas(){
    int h,v;
    cin>>h>>v;
    if(v>=0&&v<=180){
        cout<<"safe";
        return 0;
    }
    else if(v==270){
        cout<<h;
        return 0;
    }
    v = v > 270 ? v - 270 : 90 - (v - 180);
    int ans=h/cos(v*M_PI/180);
    cout<<ans;
    return 0;
}