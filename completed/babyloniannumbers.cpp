//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int n;cin>>n;
//    string s;
//    cin.ignore();
//    while(n--){
//        getline(cin,s);
//        long ans=0;
//        string currNum="";
//        vector<long> nums;
//        for(int i=0;i<s.length();i++){
//            if(s[i]!=',') currNum+=s[i];
//            else {
//                if(currNum=="")currNum="0";
//                nums.push_back(stoi(currNum));
//                currNum="";
//            }
//        }
//        if(currNum=="")currNum="0";
//        nums.push_back(stoi(currNum));
//        for(int i=0;i<nums.size();i++){
//            ans+=(pow(60,nums.size()-i-1)*nums[i]);
//        }
//        cout<<ans<<endl;
//    }
//}