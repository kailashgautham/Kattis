#include"bits/stdc++.h"
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    string aNum="";
    string bNum="";
    while(a>0&&b>0){
        int one = a%10;
        int two = b%10;
        if(one>=two) aNum += to_string(one);
        if(two>=one) bNum += to_string(two);
        a/=10;
        b/=10;
    }
    while(a>0) {
        aNum += to_string(a%10);
        a/=10;
    }
    while(b>0) {
        bNum += to_string(b%10);
        b/=10;
    }
    if(aNum==string{""}) aNum="YODA";
    else reverse(aNum.begin(), aNum.end());
    if(bNum==string{""}) bNum="YODA";
    else reverse(bNum.begin(), bNum.end());
    aNum = aNum == string{"YODA"} ? aNum : to_string(stoi(aNum));
    bNum = bNum == string{"YODA"} ? bNum : to_string(stoi(bNum));
    cout<<aNum<<endl<<bNum;

}