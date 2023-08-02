//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int a,b;
//    while(cin>>a>>b&&(a!=0||b!=0)){
//        int carry=0;
//        int prev=0;
//        while(a>0&&b>0){
//            if(a%10+b%10+prev>9) carry+=1;
//            prev = (a%10+b%10+prev)/10;
//            a/=10;
//            b/=10;
//        }
//        while(a>0){
//            if(a%10+prev>9) carry+=1;
//            prev = (a%10+prev)/10;
//            a/=10;
//        }
//        while(b > 0){
//            if(b%10+prev>9) carry+=1;
//            prev = (b%10+prev)/10;
//            b/=10;
//        }
//        if(carry==0) cout<<"No carry operation."<<endl;
//        else if(carry==1)cout<<"1 carry operation."<<endl;
//        else cout<<carry<<" carry operations."<<endl;
//    }
//}