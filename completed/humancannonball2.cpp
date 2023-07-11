#include"bits/stdc++.h"
using namespace std;
void humancannonball2(){
    int n;cin>>n;
    float v,t,x,h1,h2;
    for(int i=0;i<n;i++){
        cin>>v>>t>>x>>h1>>h2;
        float rad = t*M_PI/180;
        float t=x/(v*cos(rad));
        float y=(v*t*sin(rad)) - (0.5*9.81*t*t);
        if(y-h1>=1&&h2-y>=1)cout<<"Safe"<<endl;
        else cout<<"Not Safe"<<endl;
    }
}