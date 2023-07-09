#include<bits/stdc++.h>
using namespace std;
int sevenwonders(){
    string s;getline(cin,s);
    int t=0;
    int c1=0;
    int g=0;
    for(char c: s) {
        if(c=='T') t+=1;
        if(c=='C') c1+=1;
        if(c=='G') g+=1;
    }
    cout<<(pow(t,2)+pow(c1,2)+pow(g,2)+7*min(min(t,c1),g));
    return 0;
}