#include"bits/stdc++.h"
using namespace std;
void triangle(){
    int n;
    int i=1;
    while(cin>>n){
        if(cin.eof()) break;
        long double a=3.0*pow(1.5,n);
        cout<<"Case "<<i<<": "<<to_string(round(a)).length()<<endl;
        i+=1;
    }
}
    