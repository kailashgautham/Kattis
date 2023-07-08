#include<bits/stdc++.h>
using namespace std;
int skocimis(){
    int a,b,c;
    cin>>a>>b>>c;
    int t=0;
    while(true){
        if(b-a<=1&&c-b<=1) break;
        else if(b-a > c-b){
            c=b;
            b=c-1;
        } else {
            a=b;
            b=a+1;
        }
        t+=1;
    }
    cout<<t;
}