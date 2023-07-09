#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=0,b=0,c=0,n,t;
    cin>>n;
    string s;
    cin.ignore();
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if((i%3==0&&s[i]=='A')||(i%3==1&&s[i]=='B')||(i%3==2&&s[i]=='C')) a++;
        if((i%4==0&&s[i]=='B')||(i%4==1&&s[i]=='A')||(i%4==2&&s[i]=='B')||(i%4==3&&s[i]=='C')) b++;
        if(((i%6==0||i%6==1)&&s[i]=='C')||((i%6==2||i%6==3)&&s[i]=='A')||((i%6==4||i%6==5)&&s[i]=='B')) c++;
    }
    cout<<max(max(a,b),c)<<endl;
    if(max(max(a,b),c)==a)cout<<"Adrian"<<endl;
    if(max(max(a,b),c)==b)cout<<"Bruno"<<endl;
    if(max(max(a,b),c)==c)cout<<"Goran"<<endl;

}