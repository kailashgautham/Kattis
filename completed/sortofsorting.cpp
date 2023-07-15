#include"bits/stdc++.h"
using namespace std;
int sortofsorting() {
    int t;
    string s;vector<string> names;
    while(cin>>t&&t!=0){
        for(int i=0;i<t;i++){
            cin>>s;
            names.push_back(s);
        }
        for(int i=0;i<t-1;i++){
            for(int j=0;j<t-1-i;j++){
                if((names[j][0] > names[j+1][0]) || (names[j][0] == names[j+1][0] && names[j][1] > names[j+1][1])){
                    string temp = names[j];
                    names[j] = names[j+1];
                    names[j+1] = temp;
                }
            }
        }
        for(string a : names) cout<<a<<endl;
        cout<<endl;
        names.clear();
    }
}