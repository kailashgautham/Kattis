#include<bits/stdc++.h>
using namespace std;
int comm() {
    int n;cin>>n;
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        int unsc = a ^ (a << 1);
        cout<<unsc<<" ";
    }
}