#include"bits/stdc++.h"
using namespace std;
int slatkisi() {
    long n,t;cin>>n>>t;
    long a = n % (long)pow(10,t);
    if (a == 0) a = 0;
    else if (a >= (long)(pow(10,t) / 2)) n += (long)(pow(10,t) - a);
    else n -= a;
    cout<<n;
}