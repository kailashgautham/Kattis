//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int t;cin>>t;
//    int cs,e,a;
//    while(t--){
//        cin>>cs>>e;
//        vector<int> cskids;
//        vector<int> econs;
//        float cs_avg=0;
//        float econs_avg=0;
//        for(int i=0;i<cs;i++) {
//            cin>>a;
//            cskids.push_back(a);
//            cs_avg+=a;
//        }
//        for(int i=0;i<e;i++) {
//            cin>>a;
//            econs.push_back(a);
//            econs_avg+=a;
//        }
//        sort(cskids.begin(), cskids.end());
//        cs_avg /= cs;
//        econs_avg /= e;
//        int count = 0;
//        for(int i=0;i<cs;i++){
//            if (cskids[i] < cs_avg && cskids[i] > econs_avg) {
//                cout<<count<<endl;
//                break;
//            }
//            if (cskids[i] < econs_avg) continue;
//            econs_avg *= e;
//            econs_avg += cskids[i];
//            e++;
//            econs_avg /= e;
//
//            cs_avg *= cs;
//            cs_avg -= cskids[i];
//            cs--;
//            cs_avg /= cs;
//            count += 1;
//        }
//    }
//}