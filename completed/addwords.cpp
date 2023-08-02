//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    unordered_map<int,string> m;
//    unordered_map<string,int> m1;
//    string s;
//    while(cin>>s){
//        if(s==string{"clear"}){
//            m.clear();
//            m1.clear();
//        }
//        else if(s==string{"calc"}){
//            string line;
//            getline(cin,line);
//            stringstream ss(line);
//            string a,op,b;
//            op="";
//            bool unknown=false;
//            int ans=0;
//            while(op!="="){
//                if(op=="") {
//                    ss>>a>>op>>b;
//                    if(m1.find(a)==m1.end()||m1.find(b)==m1.end()) {
//                        unknown = true;
//                        break;
//                    }
//                    else ans = op == "+" ? m1[a] + m1[b] : m1[a] - m1[b];
//                }
//                else {
//                    ss>>b;
//                    if(m1.find(b)==m1.end()){
//                        unknown = true;
//                        break;
//                    }
//                    else ans = op == "+" ? m1[b] + ans : ans - m1[b];
//                }
//                ss>>op;
//            }
//            if(unknown || m.find(ans) == m.end())cout<<line<<" unknown"<<endl;
//            else cout<<line<<" "<<m[ans]<<endl;
//        }
//        else {
//            string a;cin>>a;
//            int q;cin>>q;
//            m[q]=a;
//            m1[a]=q;
//        }
//    }
//}