#include"bits/stdc++.h"
using namespace std;
int friday(){
    int t;cin>>t;
    while(t--){
        int currDayOfWeek=0;
        int currDay = 1;
        int total = 0;
        int d,m;cin>>d>>m;
        int x;
        vector<int> months;
        while(m--) {
            cin>>x;
            months.push_back(x);
        }
        m=months.size();
        for(int month : months) {
            while(currDay <= month) {
                if(currDay == 13 && currDayOfWeek == 5) total+= 1;
                currDay++;
                currDayOfWeek = (currDayOfWeek + 1) % 7;
            }
            currDay = 1;
        }
        cout<<total<<endl;
    }
}