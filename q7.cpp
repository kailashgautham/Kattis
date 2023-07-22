//#include<bits/stdc++.h>
//#define Pi 3.14159265358979323846;
//using namespace std;
//int q7(){
//    int t;cin>>t;
//    int n;
//    int x,y;
//    vector<pair<int,int>> coords;
//    while(t--){
//        cin>>n;
//        int count=0;
//        for(int i=0;i<n;i++){
//            cin>>x>>y;
//            pair<int,int> p (x,y);
//            coords.push_back(p);
//        }
//        for(int i=0;i<n;i++) {
//            for(int j=0;j<n;j++) {
//                if(i==j) continue;
//                float angle = atan2(coords[i].second - coords[j].second, coords[i].first - coords[j].first);
//                angle = (angle * 180) / Pi;
//                int intAngle;
//                if((int)angle - angle != 0) continue;
//                intAngle = (int)angle;
//                if(intAngle%45==0) count+=1;
//            }
//        }
//        cout<<count<<endl;
//        coords.clear();
//    }
//}