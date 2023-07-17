#include<bits/stdc++.h>
using namespace std;
int skyisland(){
    int n,m;
    cin>>n>>m;
    int a,b;
    unordered_map<int,bool> vertices;
    unordered_map<int,vector<int>> bridges;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        if(bridges.find(a) == bridges.end()) {
            vector<int> v;
            bridges[a] = v;
        }
        bridges[a].push_back(b);
    }
    vector<int> visited;
    int count=0;
    visited.push_back(1);
    while(!visited.empty()) {
        int curr = visited[visited.size() - 1];
        visited.erase(visited.begin() + visited.size() - 1);
        if (!vertices[curr]) count += 1;
        vertices[curr] = true;
        if(bridges[curr].size() > 0) {
            visited.push_back(bridges[curr][0]);
            bridges[curr].erase(bridges[curr].begin());
        }
    }
    if(count == n) cout<<"YES";
    else cout<<"NO";
}