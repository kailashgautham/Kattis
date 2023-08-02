//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    unordered_map<int,int> m;
//    int n,t;
//    vector<int> nums;
//    while(cin>>n){
//        bool found=true;
//        for(int i=0;i<n;i++){
//            cin>>t;
//            nums.push_back(t);
//        }
//        for(int i=0;i<n-1;i++){
//            m[abs(nums[i+1]-nums[i])] += 1;
//        }
//        for(int i=1;i<=n-1;i++){
//            if(m[i]==0||m[i]>1) {
//                found=false;
//                cout<<"Not jolly"<<endl;
//                break;
//            }
//        }
//        if(found) cout<<"Jolly"<<endl;
//        m.clear();
//        nums.clear();
//    }
//}