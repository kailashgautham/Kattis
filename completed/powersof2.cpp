//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int n,e;cin>>n>>e;
//    if(e>=24){
//        cout<<0;
//        return 0;
//    }
//    string num = to_string((long)pow(2,e));
//    int count=0;
//    for(int i=0;i<=n;i++){
//        string curr = to_string(i);
//        if(curr.length() < num.length()) continue;
//        else {
//            for(int j=0;j <=curr.length() - num.length(); j++) {
//                if(curr.substr(j, num.length()) == num) {
//                    count++;
//                    break;
//                }
//            }
//        }
//    }
//    cout<<count;
//}