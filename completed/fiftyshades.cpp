#include "bits/stdc++.h"
#include "functions.h"
using namespace std;

void fiftyshades() {
    int n;cin>>n;
    string s;
    int co=0;
    cin.ignore();
    for(int i=0;i<n;i++){
        getline(cin,s);
        int f=0;
        int r=0;
        for(char c : s){
            if((f==3&&(c=='k'||c=='K'))||(r==3&&(c=='e'||c=='E'))){
                co++;
                break;
            }
            if((f==3)||(f==2&&(c=='n'||c=='N'))||(f==1&&(c=='i'||c=='I'))||(f==0&&(c=='p'||c=='P')))f++;
            else f=c=='p'||c=='P'?1:0;
            if((r==3)||(r==2&&(c=='s'||c=='S'))||(r==1&&(c=='o'||c=='O'))||(r==0&&(c=='r'||c=='R')))r++;
            else r=c=='r'||c=='R'?1:0;
        }
    }
    if(co>0)cout<<co;
    else cout<<"I must watch Star Wars with my daughter";
}