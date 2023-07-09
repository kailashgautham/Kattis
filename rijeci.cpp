#include<bits/stdc++.h>
using namespace std;
int rijeci(){
    int a=1,b=0,tmp;
    int n;cin>>n;
    while(n--){
        tmp=b;
        b=a+b;
        a=tmp;
    }
    cout<<a<<" "<<b;
}