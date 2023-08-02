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
//        int godIndex=0;
//        int mechaIndex=0;
//        while(godIndex < g &&mechaIndex < mg){
//            if(god[godIndex]>mecha[mechaIndex]) mechaIndex++;
//            else if(god[godIndex]<mecha[mechaIndex]) godIndex++;
//            else mechaIndex++;
//        }
//        if(godIndex==g&&mechaIndex==mg)cout<<"uncertain"<<endl;
//        else if(godIndex==g)cout<<"MechaGodzilla"<<endl;
//        else cout<<"Godzilla"<<endl;
//    }
//}