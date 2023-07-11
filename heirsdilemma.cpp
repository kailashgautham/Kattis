#include<bits/stdc++.h>
using namespace std;
bool divisible(int x){
    int tmp=0;
    for(int i=0;i<6;i++){
        if(x%((x/(int)pow(10,tmp))%10) != 0) return false;
        tmp+=1;
    }
    return true;
}

bool differentDigits(int x){
    unordered_map<int,int> mappo;
    while(x>0){
        if(mappo[x%10]==1)return false;
        mappo[x%10]=1;
        x/=10;
    }
    return true;
}
int heirsdilemma(){
    int x,y;
    cin>>x>>y;
    int ans=0;
    for(int i=x;i<=y;i++){
        if(divisible(i)&&differentDigits(i)) ans+=1;
    }
    cout<<ans;
}


