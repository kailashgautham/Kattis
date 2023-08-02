//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int n,q;
//    cin>>n>>q;
//    int def=0;
//    string s;
//    unordered_map<int,int> m;
//    int a,b;
//    while(q--){
//        cin>>s;
//        if(s==string{"SET"}){
//            cin>>a>>b;
//            m[a]=b;
//        } else if(s==string{"PRINT"}){
//            cin>>a;
//            if(m.find(a)==m.end())cout<<def<<endl;
//            else cout<<m[a]<<endl;
//        }
//        else {
//            cin>>def;
//            m.clear();
//        }
//    }
//}