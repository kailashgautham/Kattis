#include"bits/stdc++.h"
using namespace std;
int meowth(){
    int n,p,x,y;
    cin>>n>>p>>x>>y;
    int t=0;
    int ans=0;
    while(t < p) {
        t = min(t + n - 1, p);
        ans = t%(n-1)==0 ? ans + ((n-1)*x) + y : ans + ((t%(n-1))*x);
    }
    cout<<ans;
    return 0;

}