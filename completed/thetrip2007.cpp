//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int n,t;
//    while(cin>>n&&n!=0){
//        vector<vector<int>> bagPairs;
//        vector<int> bags;
//        for(int i=0;i<n;i++){
//            cin>>t;
//            bags.push_back(t);
//        }
//        sort(bags.begin(), bags.end());
//        int smallPtr=0;
//        int largePtr=0;
//        while(largePtr < n){
//            while(bags[smallPtr] >= bags[largePtr]) largePtr++;
//            if(largePtr < n) {
//                bagPairs.push_back({bags[smallPtr], bags[largePtr]});
//                bags.erase(bags.begin() + smallPtr);
//            }
//            largePtr += 1;
//        }
//        cout<<bags.size()<<endl;
//    }
//}