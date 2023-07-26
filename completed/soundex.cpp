//#include"bits/stdc++.h"
//using namespace std;
//int main(){
//    unordered_map<char,int> m;
//    string s;
//    string out;
//    while(cin>>s){
//        out="";
//        for(int i=0;i<s.length();i++){
//            if((s[i]=='B'||s[i]=='F'||s[i]=='P'||s[i]=='V')) {
//                out += to_string(1);
//            }
//            else if((s[i]=='C'||s[i]=='G'||s[i]=='J'||s[i]=='K'||s[i]=='Q'||s[i]=='S'||s[i]=='X'||s[i]=='Z')) {
//                out += to_string(2);
//            }
//            else if((s[i]=='D'||s[i]=='T')) {
//                out += to_string(3);
//            }
//            else if((s[i]=='L')) {
//                out += to_string(4);
//            }
//
//            else if((s[i]=='M'||s[i]=='N')) {
//                out += to_string(5);
//            }
//            else if((s[i]=='R')) {
//                out += to_string(6);
//            }
//            else out += ' ';
//        }
//        for(int i=0;i<out.length();i++) {
//            if (out[i] ==' ') continue;
//            if (i == out.length() - 1 || out[i] != out[i+1]) cout<<out[i];
//        }
//        cout<<endl;
//
//    }
//}
//
