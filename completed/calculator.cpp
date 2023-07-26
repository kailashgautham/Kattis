//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int n;cin>>n;
//    long prevop=1;
//    while(n--){
//        long a,b;
//        char c;
//        cin>>a>>c>>b;
//        if(c=='+') {cout<<(a+b-prevop); prevop=a+b-prevop;}
//        else if(c=='-'){cout<<((a-b)*prevop);prevop=((a-b)*prevop);}
//        else if(c=='*'){
//            prevop=pow(a*b, 2);
//            cout<<prevop;
//        }
//        else {
//            if(a%2==0)prevop=a/2;
//            else prevop=(a+1)/2;
//            cout<<prevop;
//        }
//        cout<<endl;
//    }
//}