#include<bits/stdc++.h>
#include "vectorfunctions.h"
using namespace std;

void backwards(vector<int>& vec){
    int size = vec.size();
    for(int i=size-1; i >= 0; i--) {
        vec.push_back(vec[i]);
    }
    vec.erase(vec.begin(), vec.begin() + size);
}

vector<int> everyOther(const vector<int>& vec){
    vector<int> ans;
    for(int i=0;i<vec.size();i+=2){
        ans.push_back(vec[i]);
    }
    return ans;
}

int smallest(const vector<int>& vec){
    int s=vec[0];
    for(int i=1;i<vec.size();i++){
        s=min(s,vec[i]);
    }
    return s;
}

int sum(const vector<int>& vec){
    return accumulate(vec.begin(),vec.end(),0);
}

int veryOdd(const vector<int>& vec){
    int t=0;
    for(int i=1;i<vec.size();i+=2){
        if(vec[i]%2!=0)t++;
    }
    return t;
}
