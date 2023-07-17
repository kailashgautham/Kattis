#include"bits/stdc++.h"
using namespace std;
int savingdaylight(){
    string s;
    while(getline(cin,s)) {
        vector<string> day;
        string word;
        stringstream ss(s);
        while(ss>>word)day.push_back(word);
        ss.clear();
        ss.str(day[3]);
        string h1,m1,h2,m2;
        while (getline(ss, word, ':')) day.push_back(word);
        ss.clear();
        ss.str(day[4]);
        while (getline(ss, word, ':')) day.push_back(word);
        h1 = day[5];
        m1 = day[6];
        h2 = day[7];
        m2 = day[8];
        int h = stoi(h2) - stoi(h1) - 1;
        int m = 60 - stoi(m1) + stoi(m2);
        if (m >= 60) h += 1;
        m = m%60;
        cout<<day[0]<<" "<<day[1]<<" "<<day[2]<<" "<<h<<" hours "<<m<<" minutes"<<endl;
    }
    return 0;
}