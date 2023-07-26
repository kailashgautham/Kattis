//#include<bits/stdc++.h>
//using namespace std;
//int binaryOneCount(int n){
//    int count=0;
//    while(n>0){
//        count = n%2==1?count+1:count;
//        n/=2;
//    }
//    return count;
//}
//
//int main(){
//    int t;cin>>t;
//    string s="";
//    for(int i=0;i<t;i++){
//        cin>>s;
//        int maxi=0;
//        for(int j=0;j<s.length();j++){
//            maxi = max(maxi, binaryOneCount(stoi(s.substr(0, j+1))));
//        }
//        cout<<maxi<<endl;
//    }
//}