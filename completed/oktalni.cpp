#include"bits/stdc++.h"
using namespace std;
int oktalni(){
    string s;cin>>s;
    string t="";
    while(s.length()%3 != 0) s = "0" + s;
    for(int i=0;i<s.length();i+=3){
        string a = s.substr(i, 3);
        string b = a == "000" ? "0" : a == "001" ? "1" : a == "010" ? "2" : a == "011" ? "3" : a == "100" ? "4" : a == "101" ? "5" : a == "110" ? "6" : "7";
        t = t + b;
    }
    cout<<t;
}