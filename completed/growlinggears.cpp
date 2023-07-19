#include"bits/stdc++.h"
using namespace std;
int growlinggears(){
    int n;cin>>n;
    int t;
    int a,b,c;
    for(int i=0;i<n;i++){
        float maxTorque=-INFINITY;
        int maxIdx;
        cin>>t;
        for(int j=0;j<t;j++){
            cin>>a>>b>>c;
            double R = (double)b / (2*a);
            float currTorque = (-a * R * R) + (b*R) + c;
            if (max(maxTorque, currTorque) == currTorque) {
                maxIdx = j + 1;
                maxTorque = currTorque;
            }
        }
        cout<<maxIdx<<endl;
    }
}


