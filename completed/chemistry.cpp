//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    string s;cin>>s;
//    int n;cin>>n;
//    string out;cin>>out;
//    unordered_map<char,int> m;
//    unordered_map<char,int> req;
//    string num="";
//    char curr=s[0];
//    for(int i=1;i<s.length();i++){
//        if(isdigit(s[i])) num+=s[i];
//        if(!isdigit(s[i]) || i == s.length() - 1){
//            if(num=="")num="1";
//            m[curr] += (stoi(num) * n);
//            curr = s[i];
//            num="";
//        }
//    }
//    if(!isdigit(s[s.length() - 1])) m[s[s.length() - 1]] += 1;
//    num="";curr=out[0];
//
//    for(int i=1;i<out.length();i++){
//        if(isdigit(out[i])) num+=out[i];
//        if(!isdigit(out[i]) || i == out.length() - 1){
//            if(num=="")num="1";
//            req[curr] += stoi(num);
//            curr = out[i];
//            num="";
//        }
//    }
//    if(!isdigit(out[out.length() - 1])) req[out[out.length() - 1]] += 1;
//    int mini=-1;
//    for(int i=0;i<out.length();i++){
//        if(isdigit(out[i])) continue;
//        if(mini==-1) mini = m[out[i]] / req[out[i]];
//        else mini = min(mini, (m[out[i]] / req[out[i]]));
//    }
//    cout<<mini;
//}