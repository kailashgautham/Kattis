#include"bits/stdc++.h"
using namespace std;
int semafori(){
    int n,l;
    cin>>n>>l;
    int d,r,g;
    int c=0;
    int dist=0;
    bool rTrue=false;
    int prev_d = 0;
    for(int i=0;i<n;i++){
        cin>>d>>r>>g;
        c += (d - prev_d);
        int red = 0;
        while(red < c) {
            red += r;
            if(red >= c) {
                rTrue = true;
                break;
            }
            red += g;
        }
        if (rTrue) c = red - red%r;
        rTrue = false;
        dist += d;
        prev_d = d;
    }
    c += (l - d);
    cout<<c;
}
