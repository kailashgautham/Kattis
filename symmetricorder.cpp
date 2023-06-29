#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> v;
    int n;
    string s;
    int j=0;

    while(cin>>n&&n!=0){
        getline(cin, s);
        j++;
        for(int i=0;i<n;i++){
            getline(cin, s);
            v.push_back(s);
        }
        cout<<"SET "<<j<<endl;
        for(int i=0;i<n;i+=2){
            cout<<v[i]<<endl;
        }
        for(int i=(n%2!=0?n-2:n-1);i>=0;i-=2){
            if(i==0)break;
            cout<<v[i]<<endl;
        }
        v.clear();
    }
}