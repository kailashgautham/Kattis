#include"bits/stdc++.h"
using namespace std;
int boolean(){
    int n;cin>>n;
    char a;
    vector<char> ans;
    stack<char> exp;
    for(int i=0;i<n;i++){
        cin>>a;
        ans.push_back(a);
    }
    string s;
    cin.ignore();
    getline(cin,s);
    for(char c : s) {
        if(c==' ')continue;
        if(c>=65&&c<=90)exp.push(c-65);
        else {
            a = exp.top();
            exp.pop();
            char b;
            if(c!='-') {
                b = exp.top();
                exp.pop();
            }
            if(c=='*') c = (a=='T'&&b=='T') ? 'T' : 'F';
            else if(c=='+') c = (a=='F'&&b=='F') ? 'F' : 'T';
            else c = a=='T'?'F':'T';
            exp.push(c);
        }
    }
    cout<<exp.top();
}