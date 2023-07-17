#include<bits/stdc++.h>
using namespace std;
int voting(){
    unordered_map<string,int> m;
    string maxi;
    int maxVotes=0;
    bool runoff = false;
    string s;
    while(getline(cin,s)&&s!=string{"***"}) {
        m[s] += 1;
        if (maxVotes == m[s]) runoff = true;
        else if (maxVotes < m[s]){
            maxi = s;
            maxVotes = m[s];
            runoff = false;
        } else continue;
    }
    if(runoff)cout<<"Runoff!";
    else cout<<maxi;
}