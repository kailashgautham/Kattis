#include"bits/stdc++.h"
using namespace std;
int imperial(){
    cout<<setprecision(20);
    unordered_map<string,double> units;
    units["thou"] = 0.001;
    units["th"] = 0.001;
    units["in"] = 1;
    units["ft"] = 12;
    units["yd"] = 36;
    units["ch"] = 792;
    units["fur"] = 7920;
    units["mi"] = 63360;
    units["lea"] = 190080;
    units["inch"] = 1;
    units["foot"] = 12;
    units["yard"] = 36;
    units["chain"] = 792;
    units["furlong"] = 7920;
    units["mile"] = 63360;
    units["league"] = 190080;
    int n;cin>>n;
    string unit1,unit2,to;cin>>unit1>>to>>unit2;
    cout<<(n*units[unit1]) / units[unit2];
}