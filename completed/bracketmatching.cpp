//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    stack<char> s;
//    int n;cin>>n;
//    string brack;cin>>brack;
//    for(int i=0;i<n;i++){
//        if(brack[i]=='('||brack[i]=='['||brack[i]=='{') s.push(brack[i]);
//        else {
//            if(s.empty()){
//                cout<<"Invalid";
//                return 0;
//            }
//            char c = s.top();
//            if((c=='{'&&brack[i]=='}')||(c=='['&&brack[i]==']')||(c=='('&&brack[i]==')')) s.pop();
//            else {
//                cout<<"Invalid";
//                return 0;
//            }
//        }
//    }
//    if(s.empty())cout<<"Valid";
//    else cout<<"Invalid";
//}