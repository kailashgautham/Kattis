//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int n;
//    while(cin>>n){
//        stack<int> s;
//        queue<int> q;
//        priority_queue<int> pq;
//        bool isStack=true;
//        bool isQueue=true;
//        bool isPqueue=true;
//        int type;
//        int a;
//        for(int i=0;i<n;i++){
//            cin>>type>>a;
//            if(type==1) {
//                s.push(a);
//                q.push(a);
//                pq.push(a);
//            } else {
//                if(s.size() > 0) {
//                    int sVal = s.top();
//                    if(a!=sVal) isStack=false;
//                    s.pop();
//                }
//                else isStack = false;
//                if(q.size() > 0) {
//                    int qVal = q.front();
//                    if (qVal!=a) isQueue = false;
//                    q.pop();
//                }
//                else isQueue = false;
//                if(pq.size() > 0) {
//                    int pqVal = pq.top();
//                    if(pqVal!=a)isPqueue=false;
//                    pq.pop();
//                }
//                else isPqueue=false;
//            }
//        }
//        if(isStack&&!isQueue&&!isPqueue)cout<<"stack"<<endl;
//        else if(!isStack&&isQueue&&!isPqueue)cout<<"queue"<<endl;
//        else if(!isStack&&!isQueue&&isPqueue)cout<<"priority queue"<<endl;
//        else if(!isStack&&!isQueue)cout<<"impossible"<<endl;
//        else cout<<"not sure"<<endl;
//
//    }
//}