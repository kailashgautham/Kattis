//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    string s1="";
//    string s2="";
//    cin>>s1>>s2;
//    string ans="";
//    int carry=0;
//    for(int i=0; i < min(s1.length(), s2.length());i++){
//        ans += to_string(((s1[s1.length() - i - 1] - '0') + (s2[s2.length() - i - 1] - '0') + carry)%10);
//        carry = ((s1[s1.length() - i - 1] - '0') + (s2[s2.length() - i - 1] - '0') + carry)/10;
//    }
//    if(s1.length() == s2.length()) {
//        if (carry != 0) ans += to_string(carry);
//        reverse(ans.begin(), ans.end());
//        cout<<ans;
//    }
//    else {
//        string last = s1.length() > s2.length() ? s1 : s2;
//        int shorter = min(s1.length(), s2.length());
//        for(int i=shorter; i < last.length(); i++){
//            ans += to_string((last[last.length() - i - 1] - '0' + carry)%10);
//            carry = (last[last.length() - i - 1] - '0' + carry)/10;
//        }
//        if (carry != 0) ans += to_string(carry);
//        reverse(ans.begin(), ans.end());
//
//        cout<<ans;
//    }
//}