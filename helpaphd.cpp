#include<bits/stdc++.h>
using namespace std;
int helpaphd(){
    int n;cin>>n;
    string s;
    cin.ignore();
    while(n--){
        getline(cin,s);
        if(s[0]=='P') cout<<"skipped"<<endl;
        else {
            int x = stoi(s);
            int y = stoi(s.substr(to_string(x).length() + 1, s.length() - to_string(x).length() - 1));
            cout<<x+y<<endl;
        }

    }
}