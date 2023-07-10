#include<bits/stdc++.h>
using namespace std;
int kornislav(){
    vector<int> d;
    for(int i=0;i<4;i++)d.push_back(0);
    cin>>d[0]>>d[1]>>d[2]>>d[3];
    sort(d.begin(), d.end());
    cout<< d[0] * d[2];
}

