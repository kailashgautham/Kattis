#include"bits/stdc++.h"
using namespace std;
void tornbygge(){
    int n;cin>>n;
    int a;
    int b=0;
    int x=1;
    for(int i=0;i<n;i++){
        cin>>a;
        if(b==0)b=a;
        else{
            if(a>b)x+=1;
            b=a;
        }
    }
    cout<<x;
}