#include<bits/stdc++.h>
using namespace std;
int hangingout() {
    int n,t;cin>>n>>t;
    int a=0;
    int c=0;
    int i;
    string s;
    while(t--){
        cin>>s;
        cin>>i;
        if(s==string{"enter"}) {
            if (c + i <= n) c += i;
            else {
                a += 1;
            }
        } else {
            c -= i;
        }
    }
    cout<<a;
    return 0;
}