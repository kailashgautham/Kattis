#include "bits/stdc++.h"
#include "functions.h"
using namespace std;

void grading() {
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    int n;cin>>n;
    char g;
    g=n>=a?'A':n>=b?'B':n>=c?'C':n>=d?'D':n>=e?'E':'F';
    cout<<g;
}