//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    string s;
//    cout<<fixed<<setprecision(2);
//    map<string, vector<int>> m;
//    int dayCount=0;
//    while(getline(cin,s)){
//        if(s == string{"CLOSE"}) {
//            dayCount++;
//            cout<<"Day "<<dayCount<<endl;
//            for(auto& i : m) {
//                float amt=0;
//                cout<<i.first<<" $";
//                for(int j=0;j<i.second.size();j+=2) {
//                    amt += ((i.second[j+1]-i.second[j])*0.1);
//                }
//                cout<<amt<<endl;
//            }
//            cout<<endl;
//        } else if (s == string{"OPEN"}){
//            m.clear();
//        } else{
//            stringstream ss(s);
//            string name,num;ss>>name>>name>>num;
//            if(m.find(name)==m.end()){
//                vector<int> curr;
//                m[name]=curr;
//            }
//            m[name].push_back(stoi(num));
//        }
//    }
//}
//
