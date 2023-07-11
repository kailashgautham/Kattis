#include"bits/stdc++.h"
using namespace std;
int thanos(){
    int t;cin>>t;
    int p,r,f;
    for(int i=0;i<t;i++){
        cin>>p>>r>>f;
        int y=0;
        if(p<=f) {
            y = ceil(log((double) f / p) / log(r));
            if (f % p == 0)y++;
        }
        cout<<y<<endl;
    }
    return 0;
}