//#include<bits/stdc++.h>
//using namespace std;
//
//int recurse(vector<int>& solution, int n, int sum, unordered_map<int,int>& m){
//    if(n == 1) return sum;
//    else if(n%2==0){
//        if(m[n] != 0) return m[n];
//        int ans = recurse(solution, n/2, sum, m);
//        m[n] = ans;
//        return ans;
//    } else {
//        if(m[n] != 0) return m[n];
//        int ans = recurse(solution, (3*n+1), sum, m);
//        m[n] = ans;
//        return ans;
//    }
//}
//int main(){
//    int n;cin>>n;
//    vector<int> solution;
//    unordered_map<int,int> m;
//    cout<<recurse(solution, n, 0, m);
//}