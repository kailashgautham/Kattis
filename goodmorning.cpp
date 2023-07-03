#include<bits/stdc++.h>
using namespace std;
int goodmorning(){
    int n;cin>>n;
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        string out="";
        bool onet=true;
        bool twot=true;
        for(int j=0;;j++){
            onet=true;
            twot=true;
            int one=a-j;
            int two=a+j;
            while(one > 10){
                int t=one%10;
                int s=(one/10)%10;
                one=one/10;
                if((((t%3==0)||((t-1)%3>=(s-1)%3))&&t>=s) || (s%3!=0&&t==0)) continue;
                else {
                    onet=false;
                    break;
                }
            }
            while(two > 10){
                int t=two%10;
                int s=(two/10)%10;
                two=two/10;
                if((((t%3==0)||((t-1)%3>=(s-1)%3))&&t>=s) || (s%3!=0&&t==0)) continue;
                else {
                    twot=false;
                    break;
                }
            }
            if(onet) {
                cout<<a-j<<endl;
                break;
            } else if(twot){
                cout<<a+j<<endl;
                break;
            }
        }
    }
    return 0;
}