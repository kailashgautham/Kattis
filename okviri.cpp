#include<bits/stdc++.h>
using namespace std;
int okviri(){
    string s;cin>>s;
    cout<<"..#..";
    for(int i=1;i<s.length();i++){
        if ((i+1)%3 == 0) cout<<".*..";
        else cout<<".#..";
    }
    cout<<endl;
    for(int i=0;i<s.length();i++){
        if ((i+1)%3 == 0) cout<<".*.*";
        else cout<<".#.#";
    }
    cout<<"."<<endl;
    for(int i=0;i<s.length();i++){
        if ((i+1)%3 == 0 || (i%3 == 0 && i != 0)) cout<<"*."<<s[i]<<".";
        else cout<<"#."<<s[i]<<".";
    }
    if(s.length()%3==0)cout<<"*"<<endl;
    else cout<<"#"<<endl;
    for(int i=0;i<s.length();i++){
        if ((i+1)%3 == 0) cout<<".*.*";
        else cout<<".#.#";
    }
    cout<<"."<<endl;
    cout<<"..#..";
    for(int i=1;i<s.length();i++){
        if ((i+1)%3 == 0) cout<<".*..";
        else cout<<".#..";
    }
}