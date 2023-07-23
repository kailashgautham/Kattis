#include"bits/stdc++.h"
using namespace std;
int lcm(int a, int b) {
    int c = max(a,b);
    while(true) {
        if(c%a==0&&c%b==0) return c;
        c++;
    }
}

int locust(){
    int k;cin>>k;
    bool allCompleted = false;
    vector<int> years;
    int y,a,b;
    vector<int> lcms;
    int answer=INFINITY;
    for(int i=0;i<k;i++) {
        cin>>y>>a>>b;
        years.push_back(y);
        lcms.push_back(lcm(a,b));
    }
    for(int i=1;;i++) {
        for(int j=0;j<years.size();j++){
            if(years[j] != -1) allCompleted = false;
            if(years[j] != -1 && i%lcms[j] == 0) {
                answer = min(answer, years[j]+i);
                years[j]=-1;
            }
        }
        if(allCompleted)break;
        allCompleted = true;
    }
    cout<<answer;
}

