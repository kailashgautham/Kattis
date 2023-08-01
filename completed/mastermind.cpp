//#include"bits/stdc++.h"
//using namespace std;
//int main(){
//    int n;cin>>n;
//    string actual,guess;
//    cin>>actual>>guess;
//    unordered_map<char,int> actualpos;
//    for(char c : actual) actualpos[c]+=1;
//    int r=0,s=0;
//    for(int i=0;i<n;i++){
//        if(actual[i]==guess[i]) {
//            r+=1;
//            actualpos[actual[i]]-=1;
//        }
//    }
//    for(int i=0;i<n;i++){
//        if(actual[i]!=guess[i] && actualpos[guess[i]] > 0) {
//            s+=1;
//            actualpos[guess[i]] -=1;
//        }
//    }
//    cout<<r<<" "<<s;
//}