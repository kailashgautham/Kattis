#include<bits/stdc++.h>
using namespace std;
int hangman() {
    string s;getline(cin,s);
    unordered_map<char,int> m;
    for(char c : s) m[c] += 1;
    int h=0;
    int g=s.length();
    char c;
    while(cin>>c){
        if(m[c]>0) {
            g -= m[c];
            m[c] = 0;
        } else h += 1;
        if (g == 0 || h == 10) break;
    }
    if(g==0)cout<<"WIN";
    else cout<<"LOSE";
    return 0;
}