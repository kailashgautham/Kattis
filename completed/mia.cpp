//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int s0,s1,t0,t1;
//    while(cin>>s0>>s1>>t0>>t1&&s0!=0) {
//        if((s0==2&&s1==1)||(s0==1&&s1==2)){
//            if((t0==2&&t1==1)||(t0==1&&t1==2)) cout<<"Tie.";
//            else cout<<"Player 1 wins.";
//        }
//        else if((t0==2&&t1==1)||(t0==1&&t1==2)) cout<<"Player 2 wins.";
//        else if(s0==s1){
//            if(t0==t1) {
//                if(s0>t0) cout<<"Player 1 wins.";
//                else if(t0>s0)cout<<"Player 2 wins.";
//                else cout<<"Tie.";
//            }
//            else cout<<"Player 1 wins.";
//        }
//        else if(t0==t1) cout<<"Player 2 wins.";
//        else if(max(s0,s1) > max(t0,t1)) cout<<"Player 1 wins.";
//        else if(max(s0,s1) < max(t0,t1)) cout<<"Player 2 wins.";
//        else if(min(s0,s1) > min(t0,t1)) cout<<"Player 1 wins.";
//        else if(min(s0,s1) < min(t0,t1)) cout<<"Player 2 wins.";
//        else cout<<"Tie.";
//        cout<<endl;
//    }
//}