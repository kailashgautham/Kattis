//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int n;cin>>n;
//    int a;
//    vector<int> nums;
//    while(n--){
//        cin>>a;
//        nums.push_back(a);
//    }
//    int maxUnique=-1;
//    int maxUniqueIdx=0;
//    unordered_map<int,int> m;
//    for(int i=0;i<nums.size();i++){
//        m[nums[i]]++;
//    }
//    for(int i=0;i<nums.size();i++){
//        if(m[nums[i]]==1){
//            if(nums[i]>maxUnique) maxUniqueIdx=i;
//            maxUnique=max(maxUnique,nums[i]);
//        }
//    }
//    if(maxUnique==-1)cout<<"none";
//    else cout<<maxUniqueIdx+1;
//}