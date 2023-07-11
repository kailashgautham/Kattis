#include<bits/stdc++.h>
using namespace std;
bool divisibleH(int n){
    int tmp=n;
    int sum=0;
    while(n>0){
        sum+=(n%10);
        n/=10;
    }
    return(tmp%sum==0);
}
int harshad(){
    int n;cin>>n;
    while(true){
        if(divisibleH(n)) {
            cout<<n;
            break;
        }
        n++;
    }
}

