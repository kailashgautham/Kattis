#include"bits/stdc++.h"
using namespace std;
int lostlineup(){
    int n,t;cin>>n;
    map<int,int> m;
    m[1]=1;
    for(int i=1;i<n;i++){
        cin>>t;
        m[t+2]=i+1;
    }
    for(int i=1;i<=n;i++){
        cout<<m[i]<<" ";
    }
    return 0;

}