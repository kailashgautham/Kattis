#include"bits/stdc++.h"
using namespace std;
int kafkaesque(){
    int n,t;cin>>n;
    int a=1;
    int tmp=0;
    bool front=true;
    while(n--){
        cin>>t;
        if(tmp!=0){
            if(t<tmp) a+=1;
        }
        tmp=t;
    }
    cout<<a;
}