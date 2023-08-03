//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int n,m;
//    float a,b;
//    while(cin>>n>>m&&n!=0){
//        float cheapest=0.0;
//        int bestA=0, bestB=0;
//        for(int i=0;i<n;i++){
//            cin>>a>>b;
//            if(a>m)continue;
//            if(cheapest==0.0||(b/a)<cheapest||(b/a==cheapest&&a>bestA)){
//                bestA=a;
//                bestB=b;
//                cheapest = b/a;
//            }
//        }
//        if(bestA==0)cout<<"No suitable tickets offered"<<endl;
//        else cout<<"Buy "<<bestA<<" tickets for $"<<bestB<<endl;
//    }
//}