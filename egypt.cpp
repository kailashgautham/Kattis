#include<bits/stdc++.h>
using namespace std;
int egypt(){
    int a,b,c;
    while(cin>>a>>b>>c&&a!=0){
        int s1=min(min(a,b), c);
        int s2=a+b+c-s1-max(max(a,b), c);
        if(s1*s1+s2*s2==max(max(a,b), c)*max(max(a,b), c))cout<<"right"<<endl;
        else cout<<"wrong"<<endl;
    }
}