//#include<bits/stdc++.h>
//using namespace std;
//
//void sumXY(vector<int>& nums){
//    unordered_map<int,int> m;
//    for(int i=0;i<nums.size();i++){
//        m[7777-nums[i]] = 1;
//        if(m[nums[i]]==1) {
//            cout<<"Yes";
//            return;
//        }
//    }
//    cout<<"No";
//}
//
//void unique(vector<int> nums){
//    sort(nums.begin(), nums.end());
//    for(int i=0;i<nums.size()-1;i++){
//        if(nums[i]==nums[i+1]) {
//            cout<<"Contains duplicate";
//            return;
//        }
//    }
//    cout<<"Unique";
//}
//
//void halfArray(vector<int> nums){
//    sort(nums.begin(), nums.end());
//    if(nums.size()%2==1&&(nums[nums.size()/2] == nums[nums.size()-1] || nums[nums.size()/2]==nums[0])) cout<<nums[nums.size()/2];
//    else if(nums[nums.size()/2] == nums[0]) cout<<nums[0];
//    else if(nums[nums.size()/2-1]==nums[nums.size()-1]) cout<<nums[nums.size()-1];
//    else cout<<-1;
//}
//
//void median(vector<int> nums){
//    sort(nums.begin(), nums.end());
//    if(nums.size()%2==1)cout<<nums[nums.size()/2];
//    else cout<<nums[nums.size()/2-1]<<" "<<nums[nums.size()/2];
//}
//
//void range(vector<int> nums){
//    vector<int> bigger;
//    for(int i=0;i<nums.size();i++){
//        if(nums[i]>=100&&nums[i]<=999)bigger.push_back(nums[i]);
//    }
//    sort(bigger.begin(), bigger.end());
//    for(int i : bigger)cout<<i<<" ";
//}
//
//
//int main(){
//    int n,t,a;cin>>n>>t;
//    vector<int> nums;
//    for(int i=0;i<n;i++){
//        cin>>a;
//        nums.push_back(a);
//    }
//    switch(t){
//        case 1:
//            sumXY(nums);
//            break;
//        case 2:
//            unique(nums);
//            break;
//        case 3:
//            halfArray(nums);
//            break;
//        case 4:
//            median(nums);
//            break;
//        case 5:
//            range(nums);
//            break;
//    }
//}