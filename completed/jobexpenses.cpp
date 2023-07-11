#include "bits/stdc++.h"
#include "functions.h"
using namespace std;

void jobexpenses() {
    int n;cin>>n;
    int t=0;
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a<0){
            t-=a;
        }
    }
    cout<<t;
}
