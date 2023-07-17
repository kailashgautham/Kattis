#include<bits/stdc++.h>
using namespace std;
int polynomial(){
    int t,n,c;cin>>t;
    vector<int> a;
    vector<int> b;
    vector<int> ans;
    while(t--){
        cin>>n;
        for(int i=0;i<=n;i++){
            cin>>c;
            a.push_back(c);
        }
        cin>>n;
        for(int i=0;i<=n;i++){
            cin>>c;
            b.push_back(c);
        }
        if(b.size()>a.size()) {
            vector<int> tmp = b;
            b = a;
            a = tmp;
        }
        for(int i=0;i<a.size()+b.size();i++)ans.push_back(0);
        for(int i=0;i<b.size();i++){
            for(int j=0;j<a.size();j++){
                ans[i+j] = ans[i+j] + b[i]*a[j];
            }
        }
        cout<<a.size()+b.size() - 2<<endl;
        for(int i =0; i < a.size()+b.size() - 1;i++) cout<<ans[i]<<" ";
        cout<<endl;
        a.clear();
        b.clear();
        ans.clear();
    }
}
