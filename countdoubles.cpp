#include<bits/stdc++.h>
using namespace std;
int doubles(){
    int n,m;
    cin>>n>>m;
    int o;
    vector<int> ans;
    while(n--){
        cin>>o;
        ans.push_back(o);
    }
    int count=0;
    int finalans=0;
    for(int i=0;i<ans.size();i++){
        if(i<m) count = ans[i]%2==0?count+1:count;
        else {
            if(count>=2)finalans+=1;
            count = ans[i-m]%2 == 0 ? count - 1 : count;
            count = ans[i]%2==0?count+1:count;
        }

    }
    if(count>=2)finalans++;
    cout<<finalans;
}