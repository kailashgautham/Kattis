#include"bits/stdc++.h"
using namespace std;
int janitor() {
    cout<<setprecision(9);
    float q,r,s,t;
    cin>>q>>r>>s>>t;
    float w=(q+r+s+t) / 2;
    float ans = sqrt((w-q)*(w-r)*(w-s)*(w-t));
    cout<<ans;
}