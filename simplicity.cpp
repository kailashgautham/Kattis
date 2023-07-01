#include<bits/stdc++.h>
#include "functions.h"
using namespace std;

struct comp
{
    template<typename T>
    bool operator()(const T &l, const T &r) const
    {
        if (l.second != r.second) {
            return l.second < r.second;
        }

        return l.first < r.first;
    }
};

void simplicity(){
    map<char, int> map;
    string s;getline(cin,s);
    int simplicity=0;
    for(char c : s){
        if(map[c]==0) simplicity+=1;
        map[c]+=1;
    }
    set<pair<char, int>, comp> set(map.begin(), map.end());
    int ans=0;
    for(auto const& pair : set) {
        if(simplicity <= 2) break;
        ans += pair.second;
        simplicity -= 1;
    }
    cout<<ans;
}