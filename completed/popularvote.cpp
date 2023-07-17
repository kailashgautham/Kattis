#include<bits/stdc++.h>
using namespace std;
int popular(){
    int t;cin>>t;
    int m=0;
    int total=0;
    int a;
    int n;
    int idx=1;
    bool tie=false;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>a;
            total+=a;
            if(a>m){
                idx=i;
                m=a;
                tie=false;
            } else if(m==a){
                tie = true;
            }else continue;
        }
        if(tie)cout<<"no winner"<<endl;
        else if(m<=total/2)cout<<"minority winner "<<idx<<endl;
        else cout<<"majority winner "<<idx<<endl;
        m=0;
        idx = 0;
        total = 0;
        tie=false;
    }
}