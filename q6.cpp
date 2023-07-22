//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int t;cin>>t;
//    int n,d;
//    while(t--){
//        vector<int> inputs;
//        cin>>n;
//        vector<int> answers;
//        for(int i=0;i<n;i++){
//            cin>>d;
//            answers.push_back(0);
//            if(d>n)continue;
//            inputs.push_back(d);
//        }
//        answers.push_back(0);
//        int maxi=0;
//            for(int i : inputs) {
//                for(int j=i;j<=n;j+=i){
//                    answers[j] += 1;
//                    maxi = max(answers[j], maxi);
//                    if(maxi == inputs.size()) break;
//                }
//                if(maxi == inputs.size()) break;
//            }
//            cout<<maxi<<endl;
//    }
//}