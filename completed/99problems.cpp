//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    cin.tie(0);
//    cout.tie(0);
//    int n,q;
//    scanf("%d%d", &n, &q);
//    int t,a;
//    vector<int> problems;
//    for(int i=0;i<n;i++){
//        cin>>t;
//        problems.push_back(t);
//    }
//    sort(problems.begin(), problems.end());
//    for(int i=0;i<q;i++){
//        cin>>t;
//        cin>>a;
//        int low=0;
//        int high = n-1;
//        int mid;
//        while(low<=high){
//            mid=low+(high-low)/2;
//            if(t==1){
//                if(problems[mid]<=a) low=mid+1;
//                else if(problems[mid]>a&&(mid==0||problems[mid-1]<=a)) {
//                    printf("%d\n", problems[mid]);
//                    problems.erase(problems.begin()+mid);
//                    n--;
//                    break;
//                } else high = mid-1;
//                continue;
//            }
//            if(problems[mid]>a) high=mid-1;
//            else if(problems[mid]<=a&&(mid==n-1||problems[mid+1]>a)) {
//                printf("%d\n", problems[mid]);
//                problems.erase(problems.begin()+mid);
//                n--;
//                break;
//            } else low = mid+1;
//        }
//        if(low>high)printf("%d\n", -1);
//    }
//}
