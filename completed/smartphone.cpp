//#include<bits/stdc++.h>
//using namespace std;
//int checkCount(string word, string typed) {
//    int tc=0;
//    for(int i=typed.length(); i >= 0; i--) {
//        if (i > word.length()) {
//            tc++;
//            continue;
//        }
//        if (typed.substr(0, i) == word.substr(0, i)) break;
//        else tc += 1;
//    }
//    tc += (word.length() - (typed.length() - tc));
//    return tc;
//}
//int main(){
//    int t;cin>>t;
//    string word, typed, s1, s2, s3;
//    while(t--){
//        int tc=0, s1c=0, s2c=0, s3c=0;
//        cin>>word>>typed>>s1>>s2>>s3;
//        tc = checkCount(word, typed);
//        s1c = checkCount(word, s1) + 1;
//        s2c = checkCount(word, s2) + 1;
//        s3c = checkCount(word, s3) + 1;
//        int mini = min(min(min(tc,s1c), s2c), s3c);
//        cout<<mini<<endl;
//
//    }
//}