#include<bits/stdc++.h>
using namespace std;
int ninetynine() {
    int curr=1;
    cout<<curr<<endl;
    while(curr<99){
        cout<<endl;
        curr += 1;
        if(curr==99){
            cout<<"boo you lost"<<endl;
            break;
        }
        if(99-curr<=2){
            curr=99;
            cout<<99;
            cout<<"yay i won"<<endl;
        }
        else {
            if(curr==95){
                curr=96;
                cout<<curr;
            }
            else {
                curr+=2;
                cout<<curr;
            }
        }
    }
}