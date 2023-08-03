//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int n,a;cin>>n;
//    vector<int> pos;
//    for(int i=0;i<n;i++){
//        cin>>a;
//        pos.push_back(a);
//    }
//    unordered_map<int,int> m;
//    int minDistance=n;
//    for(int i=0;i<n;i++){
//        if(m.find(pos[i])==m.end()){
//            m[pos[i]] = i;
//            continue;
//        }
//        minDistance=min(i-m[pos[i]], minDistance);
//        m[pos[i]] = i;
//    }
//    cout<<n;
//}