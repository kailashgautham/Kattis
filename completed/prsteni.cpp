#include"bits/stdc++.h"
using namespace std;
void reduced(int,int);
int prsteni(){
    int n,c,t;cin>>n;
    cin>>c;
    for(int i=1;i<n;i++){
        cin>>t;
        reduced(c,t);
    }
    return 0;

}

void reduced(int a, int b) {
    for(int i=min(a,b);i>1;i--){
        if(a%i==0&&b%i==0){
            a/=i;
            b/=i;
        }
    }
    cout<<max(a,b)<<"/"<<min(a,b)<<endl;
}