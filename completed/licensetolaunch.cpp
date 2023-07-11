#include"bits/stdc++.h"
using namespace std;
int main(){
    int n,t;cin>>n;
    int d=0;
    int s=0;
    for(int i=0;i<n;i++){
        cin>>t;
        if(i==0||t<d){
            d=t;
            s=i;
        }
    }
    cout<<s;
}