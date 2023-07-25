//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    string s,t;
//    getline(cin,s);
//    getline(cin,t);
//    int sIndex=0;
//    string sticky="";
//    for(int i=0;i<t.length();i++) {
//        if(t[i]==s[sIndex]) sIndex++;
//        else {
//            sticky+=t[i];
//        }
//    }
//    sort(sticky.begin(), sticky.end());
//    for(int i=0;i<sticky.length()-1;i++) {
//        if(sticky[i] == sticky[i+1]) continue;
//        cout<<sticky[i];
//    }
//    cout<<(sticky[sticky.length()-1]);
//}