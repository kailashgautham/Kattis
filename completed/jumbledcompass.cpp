#include"bits/stdc++.h"
using namespace std;
int jumbledcompass(){
    int n,t;
    cin>>n>>t;
    int clock,anticlock;
    if (n <= t) clock = t - n;
    else clock = 360 - n + t;
    if (t <= n) anticlock = n - t;
    else anticlock = n + (360 - t);
    if(clock<=anticlock)cout<<clock;
    else cout<<-anticlock;
}