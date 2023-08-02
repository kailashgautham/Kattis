//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    string s;
//    int unique=0;
//    unordered_map<char,long double> m;
//    unordered_map<int,int> multiplier;
//    cout<<setprecision(30);
//    while(cin>>s){
//        for(int i=0;i<s.length();i++){
//            m[s[i]]++;
//        }
//        long double ans = 1.0;
//        for(int i=1;i<=s.length();i++) multiplier[i]++;
//        for(int i=0;i<s.length();i++){
//            if(m[s[i]]>0) {
//                multiplier[m[s[i]]]--;
//                m[s[i]]--;
//            }
//        }
//        for(int i=1;i<=s.length();i++){
//            if(multiplier[i]==0) continue;
//            else ans *= pow(i, multiplier[i]);
//        }
//        m.clear();
//        multiplier.clear();
//        cout<<ans<<endl;
//    }
//}