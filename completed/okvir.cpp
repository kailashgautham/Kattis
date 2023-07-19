#include"bits/stdc++.h"
using namespace std;
int okvir(){
    int m,n;cin>>m>>n;
    int u,l,r,d;cin>>u>>l>>r>>d;
    string s;
    vector<string> strings;
    for(int i=0;i<m;i++){
        cin>>s;
        strings.push_back(s);
    }

    int cols = n + l + r;

    //upper rows
    for(int i=0;i<u;i++){
        for(int j=0;j<cols;j++) {
            if(i%2==0){
                if(j%2==0)cout<<'#';
                else cout<<'.';
            } else {
                if(j%2==0)cout<<'.';
                else cout<<'#';
            }
        }
        cout<<endl;
    }

    //rows with names
    for(int i=u;i<m + u;i++){
        for(int j=0;j<l;j++) {
            if(i%2==0){
                if(j%2==0)cout<<'#';
                else cout<<'.';
            } else {
                if(j%2==0)cout<<'.';
                else cout<<'#';
            }
        }
        cout<<strings[i-u];
        for(int j=n+l;j<n+l+r;j++) {
            if(i%2==0){
                if(j%2==0)cout<<'#';
                else cout<<'.';
            } else {
                if(j%2==0)cout<<'.';
                else cout<<'#';
            }
        }
        cout<<endl;
    }

    //lower rows
    for(int i=m+u;i<m+u+d;i++){
        for(int j=0;j<cols;j++) {
            if(i%2==0){
                if(j%2==0)cout<<'#';
                else cout<<'.';
            } else {
                if(j%2==0)cout<<'.';
                else cout<<'#';
            }
        }
        cout<<endl;
    }
}