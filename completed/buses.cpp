//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int n;
//    cin>>n;
//    int a;
//    vector<int> buses;
//    for(int i=0;i<n;i++){
//        cin>>a;
//        buses.push_back(a);
//    }
//    sort(buses.begin(), buses.end());
//    int start=buses[0];
//    int end=buses[0];
//    for(int i=1;i<n;i++){
//        if(buses[i]==buses[i-1]+1) {
//            end=buses[i];
//            if (i==buses.size()-1){
//                if(end==start) cout<<end;
//                else if(end == start + 1) cout<<start<<" "<<end<<" ";
//                else cout<<start<<"-"<<end;
//            }
//            continue;
//        }
//        if(end == start) cout<<end<<" ";
//        else if(end == start + 1) cout<<start<<" "<<end<<" ";
//        else cout<<start<<"-"<<end<<" ";
//        start = buses[i];
//        end = buses[i];
//        if(i == buses.size() - 1) cout<<end;
//    }
//}
//
