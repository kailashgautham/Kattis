#include<bits/stdc++.h>
using namespace std;
string toBinary(int, int);
int sretan(){
    int n;cin>>n;
    n-=1;
    int a=0;
    while(n>=0){
        a+=1;
        n-=pow(2,a);

    }
    cout<<toBinary(n+pow(2,a),a);
}

string toBinary(int n, int a) {
    string ans(a,'4');
    for(int i=a-1;i>=0;i--){
        ans[i]=n%2==0?'4':'7';
        n/=2;
    }

    return ans;
}
