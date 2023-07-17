#include"bits/stdc++.h"
using namespace std;
int peragram(){
    int odds=0;
    unordered_map<char,int> m;
    unordered_map<char,int> oddchars;
    string s;cin>>s;
    for(char c : s) m[c] += 1;
    for(char c : s) {
        if(m[c]%2>0 && oddchars[c] == 0) {
            oddchars[c] = 1;
            odds+=1;
        }
    }
    if(odds==0)cout<<0;
    else cout<<odds-1;
}