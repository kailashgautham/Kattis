#include"bits/stdc++.h"
#include "functions.h"
using namespace std;
void ladder(){
    float h,v;cin>>h>>v;
    cout<<ceil(sqrt((pow((h / tan(v * M_PI / 180)), 2) + pow(h, 2))));
}