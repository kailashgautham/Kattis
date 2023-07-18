#include<bits/stdc++.h>
using namespace std;
int overdraft(){
    int n;cin>>n;
    int t;
    int curr=0;
    int mini=0;
    for(int i=0;i<n;i++){
        cin>>t;
        curr += t;
        mini=min(mini,curr);
    }
    cout<<(mini*-1);
}