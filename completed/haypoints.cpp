#include"bits/stdc++.h"
using namespace std;
int haypoints(){
    int n,t;
    cin>>n>>t;
    string s;
    int c;
    unordered_map<string,int> values;
    for(int i=0;i<n;i++){
        cin>>s;
        cin>>c;
        values[s]=c;
    }
    int total;
    for(int i=0;i<t;i++){
        total=0;
        while(cin>>s && s!= ".") total += values[s];
        cout<<total<<endl;
    }
}