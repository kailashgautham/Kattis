//#include<bits/stdc++.h>
//using namespace std;
//void simplify(int num, int denom){
//    bool simplified=false;
//    int mini;
//    while(!simplified){
//        mini=min(abs(num),abs(denom));
//        for(int i=2;i<=mini;i++){
//            if(num%i==0&&denom%i==0) {
//                num/=i;
//                denom/=i;
//                break;
//            }
//            if(i==mini) simplified=true;
//        }
//        if(mini==1)simplified=true;
//        if(simplified)cout<<num<<"/"<<denom;
//    }
//}
//int main(){
//    int a,b;
//    char c;
//    cin>>a>>c>>b;
//    int numerator = a - (32*b);
//    int denominator = b;
//    numerator *= 5;
//    denominator *= 9;
//    if(numerator==0) cout<<"0/1";
//    else simplify(numerator, denominator);
//}