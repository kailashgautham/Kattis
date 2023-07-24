//#include<bits/stdc++.h>
//using namespace std;
//
//bool identical(string s, string p) {
//    return s == p;
//}
//
//bool preappending(string s, string p) {
//    if(p.length() != s.length() - 1) return false;
//    if(isdigit(s[0]) && s.substr(1, p.length()) == p) return true;
//    if(isdigit(s[p.length()]) && s.substr(0, p.length()) == p) return true;
//    return false;
//}
//
//bool reverseCase(string s, string p){
//    for(int i=0;i<p.length();i++) {
//        if(p[i] >= 65 && p[i] <= 90) p[i] = p[i] + 32;
//        else if(p[i]>=97&&p[i]<=122) p[i] -= 32;
//    }
//    return s == p;
//}
//
//int main(){
//    string s,p;
//    cin>>s>>p;
//    if(preappending(s,p) || reverseCase(s,p) || identical(s,p)) cout<<"Yes";
//    else cout<<"No";
//}