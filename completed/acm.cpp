//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int n,p,t;cin>>n>>p;
//    vector<int> probs;
//    for(int i=0;i<n;i++){
//        cin>>t;
//        probs.push_back(t);
//    }
//    int penalty=probs[p];
//    if(penalty>300){
//        cout<<"0 0";
//        return 0;
//    }
//    probs.erase(probs.begin() + p);
//    int currTime=penalty;
//    int probsSolved=1;
//    sort(probs.begin(), probs.end());
//    for(int i=0;i<n-1;i++){
//        if(currTime+probs[i]<=300) {
//            probsSolved++;
//            currTime+=probs[i];
//            penalty+=currTime;
//        } else break;
//    }
//    cout<<probsSolved<<" "<<penalty;
//}