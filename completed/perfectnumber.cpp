//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int n;
//    while(cin>>n){
//        int sum=0;
//        for(int i=1;i<=sqrt(n);i++){
//            if(n%i==0) {
//                sum+=i;
//                if((n/i)!=i&&(n/i)<n) {
//                    sum+=(n/i);
//                }
//            }
//        }
//        if(sum==n)cout<<n<<" perfect"<<endl;
//        else if(abs(sum-n) <= 2) cout<<n<<" almost perfect"<<endl;
//        else cout<<n<<" not perfect"<<endl;
//    }
//}