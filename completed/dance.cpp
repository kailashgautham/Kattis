#include"bits/stdc++.h"
using namespace std;
int dance(){
    int n,m;
    cin>>n>>m;
    vector<string> dance;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        dance.push_back(s);
    }
    int count=0;
    bool emptyFrame=true;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(dance[j][i] != '_') {
                emptyFrame=false;
                break;
            }
        }
        if(emptyFrame) count++;
        emptyFrame = true;
    }
    cout<<count+1;
}