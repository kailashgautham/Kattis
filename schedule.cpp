//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int n;
//    while(cin>>n&&n!=0){
//        vector<string> am;
//        vector<string> pm;
//        string time;
//        cin.ignore();
//        for(int i=0;i<n;i++){
//            getline(cin,time);
//            stringstream ss(time);
//            string hour,period;
//            ss>>hour>>period;
//
//            if(period[0]=='a'){
//                if(hour[0]=='1'&&hour[1]=='2') {
//                    hour[0]='0';
//                    hour[1]='0';
//                }
//                else if(hour[1] == ':') hour = "0" + hour;
//                am.push_back(hour);
//            }
//            else {
//                if(hour[0]=='1'&&hour[1]=='2') {
//                    hour[0]='0';
//                    hour[1]='0';
//                }
//                else if(hour[1] == ':') hour = "0" + hour;
//                pm.push_back(hour);
//            }
//        }
//        sort(am.begin(), am.end());
//        sort(pm.begin(), pm.end());
//        for(string i : am) {
//            if(i[1]=='0' && i[0]=='0') {
//                i[0] = '1'; i[1] = '2';
//            }
//            else if(i[0]=='0') i = i.substr(1, i.length() - 1);
//            cout<<i<<" a.m."<<endl;
//        }
//        for(string i : pm) {
//            if(i[1]=='0' && i[0]=='0') {
//                i[0] = '1'; i[1] = '2';
//            }
//            else if(i[0]=='0') i = i.substr(1, i.length() - 1);
//            cout<<i<<" p.m."<<endl;
//        }
//        cout<<endl;
//    }
//}