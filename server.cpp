#include<bits/stdc++.h>
using namespace std;
int server(){
    int n,t;
    cin>>n>>t;
    int to=0;
    int ans=0;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        if(to+x<=t)to+=x;
        else{
            break;
        }
        ans+=1;
    }
    cout<<ans;
}