//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    long n,m,a,c,xo;cin>>n>>m>>a>>c>>xo;
//    vector<long> series;
//    vector<long> sorted;
//    for(int i=1;i<=n;i++){
//        long x = (a*xo + c) % m;
//        xo = x;
//        series.push_back(x);
//    }
//    sorted = series;
//    sort(sorted.begin(), sorted.end());
//    long found=0;
//    for(int i=0;i<series.size();i++){
//        long toFind=series[i];
//        long low=0;
//        long high=series.size() - 1;
//        long mid;
//        while(low <= high){
//            mid=low+(high-low)/2;
//            if(series[mid]==toFind){
//                found+=1;
//                break;
//            }
//            else if(series[mid]>toFind)high=mid-1;
//            else low=mid+1;
//        }
//    }
//    cout<<found;
//}
