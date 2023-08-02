//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int n;
//    string s="";
//    while(cin>>n&&n!=0){
//        if(s=="")cin.ignore();
//        string name;
//        map<string,vector<string>> food;
//        for(int i=0;i<n;i++){
//            getline(cin,s);
//            stringstream ss(s);
//            ss>>name;
//            string fooditem;
//            while(ss>>fooditem) {
//                if(food.find(fooditem)==food.end()){
//                    vector<string> names;
//                    food[fooditem] = names;
//                }
//                food[fooditem].push_back(name);
//            }
//        }
//        for(auto it : food) {
//            cout<<it.first<<" ";
//            sort(it.second.begin(), it.second.end());
//            for(string q : it.second) {
//                cout<<q<<" ";
//            }
//            cout<<endl;
//        }
//        s="";
//        cout<<endl;
//    }
//}