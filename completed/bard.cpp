//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int n;cin>>n; //villagers
//    int e;cin>>e; //evenings
//    int t,a;
//    unordered_map<int,int> m;
//    int totalSongs = 0;
//    for(int i=0;i<e;i++){
//        vector<int> villagers;
//        bool oneFound=false;
//        cin>>t;
//        for(int j=0;j<t;j++){
//            cin>>a;
//            if(a==1) oneFound=true;
//            villagers.push_back(a);
//        }
//        for(int j=0;j<villagers.size();j++){
//            if(oneFound) m[villagers[j]]++;
//            else m[villagers[j]] = totalSongs;
//        }
//        if(oneFound) totalSongs++;
//    }
//    cout<<1<<endl;
//    for(int i=2;i<=n;i++){
//        if(m[i]==totalSongs)cout<<i<<endl;
//    }
//}