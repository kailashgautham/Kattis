#include<bits/stdc++.h>
using namespace std;
int racingalphabet(){
    setprecision(10);
    float circumference = M_PI * 60;
    int n;cin>>n;
    string s;
    cin.ignore();double time;
    double distance;
    while(n--){
        time = 0.0;
        getline(cin,s);
        for(int i=1;i<s.length();i++) {
            distance = 0;
            if (s[i] == ' ' || s[i - 1] == ' ') {
                char c = s[i] == ' ' ? s[i - 1] : s[i];
                if (c > 'M') {
                    distance = abs('Z' - c) + 1;
                } else {
                    distance = abs(c - 'A') + 2;
                }
            } else if (s[i] == '\'' || s[i - 1] == '\'') {
                char c = s[i] == '\'' ? s[i - 1] : s[i];
                if (c > 'N') {
                    distance = abs('Z' - c) + 2;
                } else {
                    distance = abs(c - 'A') + 1;
                }
                cout << distance << endl;
            } else {
                if (abs(s[i - 1] - s[i]) < 14) distance = abs(s[i - 1] - s[i]);
                else distance = 28 - abs(s[i - 1] - s[i]);
            }
//            cout<<s[i-1]<<" "<<s[i]<<endl;
//            cout<<distance<<endl;
            time += (((float) (distance / 28.0) * circumference) / 15.0) + 1;
        }
        cout<<fixed << setprecision(10)<<time<<endl;
    }
}