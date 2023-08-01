//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int count=1;
//    string s;
//    while(cin>>s&&s!=string{"END"}){
//        bool first=true;
//        bool started=false;
//        int length=0;
//        int curr=0;
//        bool possible = true;
//        for(int i=0;i<s.length();i++){
//            if(first) {
//                if(s[i]=='*'){
//                    started = !started;
//                    if(started==false) first = false;
//                }
//                else length++;
//                continue;
//            }
//            if(s[i]=='*') {
//                if(curr != length) {
//                    cout<<count<<" NOT EVEN"<<endl;
//                    possible = false;
//                    break;
//                }
//                curr=0;
//            }
//            else curr++;
//        }
//        if(possible) cout<<count<< " EVEN"<<endl;
//        count++;
//    }
//}