//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    string s;cin>>s;
//    char lookFor = s[s.length()-1];
//    int n;cin>>n;
//    vector<string> names;
//    string a;
//    unordered_map<char,int> m;
//    for(int i=0;i<n;i++){
//        cin>>a;
//        m[a[0]]++;
//        if(a[0]==lookFor) names.push_back(a);
//    }
//    if(names.empty())cout<<"?";
//    else {
//        if(m[lookFor]>0)m[lookFor]--;
//        for(string name : names) {
//            if(m[name[name.length()-1]] == 0) {
//                cout<<name<<"!"<<endl;
//                return 0;
//            }
//        }
//        cout<<names[0]<<endl;
//    }
//
//}
