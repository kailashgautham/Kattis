#include"bits/stdc++.h"
using namespace std;
int main(){
    string s,f,l;
    map<string,vector<string>> m;
    unordered_map<string,int> firstNameCount;
    while(getline(cin,s)&&s!=""){
        stringstream ss(s);
        ss>>f>>l;
        if(m.find(l)==m.end()) {
            vector<string> names;
            m[l]=names;

        }
        m[l].push_back(f + " " + l);
        firstNameCount[f] += 1;
    }
    for(auto it : m) {
        sort(m[it.first].begin(), m[it.first].end());
    }
    for(auto it : m) {
        for(string name : it.second) {
            stringstream ss(name);
            string first,second;
            ss>>first>>second;
            if(firstNameCount[first] > 1) cout<<name<<endl;
            else cout<<first<<endl;
        }
    }
}