#include<bits/stdc++.h>
using namespace std;
int flipflow(){
    int t,s,n,c;cin>>t>>s>>n;
    int top=0;
    int bottom=s;
    int prev=-1;
    bool botToTop = true;
    for(int i=0;i<n;i++){
        cin>>c;
        if(prev!=-1) {
            if (botToTop) {
                top = top + min(c - prev, bottom);
                bottom = max((bottom - (c - prev)), 0);
            } else {
                bottom = bottom + min(c - prev, top);
                top = max((top - (c - prev)), 0);
            }
            botToTop = !botToTop;
        }
        prev = c;
    }

    if (botToTop) cout<<max(bottom - (t - prev), 0);
    else cout<<max(top - (t - prev), 0);
}

