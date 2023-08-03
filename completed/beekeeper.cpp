//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int n;
//    string s;
//    while(cin>>n&&n!=0){
//        string ans="";
//        int maxCount=0;
//        for(int i=0;i<n;i++){
//            int currCount=0;
//            cin>>s;
//            for(int j=0;j<s.length()-1;j++){
//                if(s[j]==s[j+1]&&(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'||s[j]=='y')) currCount++;
//            }
//            if(currCount>maxCount||maxCount==0) ans=s;
//            maxCount = max(currCount, maxCount);
//        }
//        cout<<ans<<endl;
//    }
//}