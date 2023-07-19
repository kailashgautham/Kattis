#include"bits/stdc++.h"
using namespace std;
int greedilyincreasingsubsequence(){
    int n;cin>>n;
    int t;
    int total=0;
    string out="";
    int tmp=0;
    while(n--&&cin>>t){
        if(t>tmp){
            out+=to_string(t)+" ";
            total+=1;
            tmp=t;
        }
    }
    cout<<total;
    cout<<out;
}