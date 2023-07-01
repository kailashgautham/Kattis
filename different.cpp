#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long n,m;
    while(cin>>n){
        cin>>m;
        if(m>n)m-=n;
        else m=n-m;
        cout<<m<<endl;
    }
}