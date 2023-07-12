#include<bits/stdc++.h>
using namespace std;
int eligibility() {
    int n;cin>>n;
    string s;
    vector<string> input;
    bool el=false;
    bool coach=false;
    string word;
    cin.ignore();
    while(n--){
        getline(cin,s);
        stringstream ss(s);
        while(ss >> word) {
            input.push_back(word);
        }
        if(stoi(input[1]) < 2010) el = true;
        if(stoi(input[2]) < 1991) el = true;
        if(!el && stoi(input[3]) > 40) el = false;
        if (!el && stoi(input[3]) < 41) coach = true;
        cout<<input[0]<<" ";
        if (coach)cout<<"coach petitions";
        else if(el)cout<<"eligible";
        else cout<<"ineligible";
        cout<<endl;
        input.clear();
        el=false;
        coach=false;
    }
}