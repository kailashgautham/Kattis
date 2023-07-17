#include"bits/stdc++.h"
using namespace std;
int rle(){
    char e;cin>>e;
    cin.ignore();
    string s;getline(cin,s);
    char tmp=' ';
    string num="";
    int count=0;
    for(char c : s){
        if(e == 'E') {
            if (c != tmp && tmp != ' ') {
                cout<<tmp;
                cout<<count;
                tmp = c;
                count = 1;
            } else if (tmp == ' ') {
                count++;
                tmp=c;
            }
            else count++;
        } else {
            if(num != "" && (c - '0' > 9 || '0' > c)) {
                count = stoi(num);
                for(int i=0;i<count;i++) {
                    cout<<tmp;
                }
                num="";
                tmp = c;
            } else if (num == "" && (c - '0' > 9 || '0' > c)) {
                tmp = c;
            } else num += c;
        }
    }
    if(e == 'E') cout<<tmp<<count;
    else {
        count = stoi(num);
        for(int i=0;i<count;i++)cout<<tmp;
    }
}