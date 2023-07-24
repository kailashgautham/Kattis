//#include<bits/stdc++.h>
//using namespace std;
//struct cmpByStringLength {
//    bool operator()(const pair<string, int>& a, const pair<string, int>& b) const {
//        if (a.second < b.second)
//            return false;
//        else if (b.second < a.second)
//            return true;
//        else
//            return a.first < b.first;
//    }
//};
//int main(){
//    int t;cin>>t;
//    while(t--){
//        map<string,int, cmpByStringLength> m;
//        int n;cin>>n;
//        string s;
//        int a;
//        int u=0;
//        while(n--){
//            cin>>s>>a;
//            if(m.find(s) == m.end()) {
//                m.insert({s, a});
//                u+=1;
//            }
//            m[s]+=a;
//        }
//        cout<<u<<endl;
//        for(const auto& i : m) cout<<i.first<<" "<<i.second<<endl;
//    }
//}