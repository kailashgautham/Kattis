#include"bits/stdc++.h"
using namespace std;
int skyisland() {
    int n,m;cin>>n>>m;
    int a=0;
    unordered_map<int, unordered_map<int, int>> mappo;
    int x,y;
    for(int i=0;i<m;i++){
        cin>>x>>y;
        if (mappo.find(x) == mappo.end()) {
            unordered_map<int, int> newmap;
            mappo[x] = newmap;
            mappo[x][y] = 1;
        }
        if (mappo.find(y) != mappo.end() && mappo[y][x] == 1) continue;
        else a += 1;
    }
    if (a >= n - 1) cout<<"YES";
    else cout<<"NO";
}