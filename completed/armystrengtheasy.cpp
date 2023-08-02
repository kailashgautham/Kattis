//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int t;cin>>t;
//    while(t--){
//        int g,mg;
//        int a;
//        cin>>g>>mg;
//        vector<int> god;
//        vector<int> mecha;
//        for(int i=0;i<g;i++){
//            cin>>a;
//            god.push_back(a);
//        }
//        for(int i=0;i<mg;i++){
//            cin>>a;
//            mecha.push_back(a);
//        }
//        sort(god.begin(), god.end());
//        sort(mecha.begin(), mecha.end());
//        while(god.size()>0&&mecha.size()>0){
//            if(god[0]>mecha[0]) mecha.erase(mecha.begin());
//            else if(god[0]<mecha[0]) god.erase(god.begin());
//            else mecha.erase(mecha.begin());
//        }
//        if(god.size()==0&&mecha.size()==0)cout<<"uncertain"<<endl;
//        else if(god.size()==0)cout<<"MechaGodzilla"<<endl;
//        else cout<<"Godzilla"<<endl;
//    }
//}