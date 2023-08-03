//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    double d;double n;
//    while(cin>>d>>n&&n!=0){
//        vector<pair<double,double>> coords;
//        for(double i=0;i<n;i++){
//            double x,y;
//            cin>>x>>y;
//            coords.push_back({x,y});
//        }
//        vector<double> sweets{0};
//        double sweetCount=n;
//        for(int i=0;i<n;i++){
//            for(double j=0;j<n;j++){
//                if(sweets[i]==1) break;
//                if(i==j)continue;
//                if(sqrt(pow(coords[i].first-coords[j].first,2) + pow(coords[i].second-coords[j].second, 2)) <= d){
//                    if(sweets[i]==0)sweetCount--;
//                    if(sweets[j]==0)sweetCount--;
//                    sweets[i]=1;
//                    sweets[j]=1;
//                    break;
//                }
//            }
//        }
//        cout<<(n-sweetCount)<<" sour, "<<sweetCount<<" sweet"<<endl;
//    }
//}