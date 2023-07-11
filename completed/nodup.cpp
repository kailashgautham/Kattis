#include "bits/stdc++.h"
#include "functions.h"
using namespace std;

void nodup() {
    unordered_map<string, int> m;
    string s;getline(cin,s);
    string temp = "";
    bool r = false;
    for(char c : s) {
        if (c != ' ') temp += c;
        else {
            if(m[temp] > 0) {
                r = true;
                break;
            }
            m[temp]+=1;
            temp="";
        }
    }
    if(m[temp]>0 || r) cout<<"no";
    else cout<<"yes";
}
