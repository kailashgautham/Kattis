#include "bits/stdc++.h"
#include "functions.h"
using namespace std;

int sumOfDigits(int n){
    int s=0;
    while(n>0){
        s+=n%10;
        n/=10;
    }
    return s;
}

void easiest() {
    int n;
    while(cin>>n&&n!=0){
        int l=11;
        int t=sumOfDigits(n);
        for(int i=l;;i++){
            if(sumOfDigits(i*n) == t) {
                cout << i << endl;
                break;
            }
        }
    }
}

