#include"bits/stdc++.h"
using namespace std;
int securedoors(){
    int n;cin>>n;
    string s;
    string word;
    string name;
    cin.ignore();
    unordered_map<string,int> map;
    while(n--){
        getline(cin,s);
        stringstream ss(s);
        ss >> word;
        ss >> name;
        cout<<name<<" ";
        if(word==string{"entry"})cout<<"entered";
        else cout<<"exited";
        if((word == string{"entry"} && map[name]==1) || (word == string{"exit"} && map[name]==0))cout<<" (ANOMALY)";
        cout<<endl;
        map[name] = word == string{"entry"} ? 1 : 0;
    }
    return 0;

}