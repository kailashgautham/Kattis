#include"bits/stdc++.h"
using namespace std;
int nothanks(){
    int n,t,a;cin>>n;
    a=0;
    vector<int> v;
    while(n--){
        cin>>t;
        v.push_back(t);
    }
    sort(v.begin(), v.end());
    for(int i=0;i<v.size();i++) {
        if(i==0||v[i]!=v[i-1]+1){
            a+=v[i];
        }
    }
    cout<<t;
}