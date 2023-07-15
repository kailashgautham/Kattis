#include"bits/stdc++.h"
using namespace std;
int circle() {
    cout << setprecision(9);
    float r,m,c;
    while(cin>>r>>m>>c&&m!=0){
        cout<<M_PI*r*r<<" ";
        cout<<((c / m) * (r*r*4));
        cout<<endl;
    }
}