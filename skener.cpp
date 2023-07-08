#include<bits/stdc++.h>
using namespace std;
int skener(){
    int r,c,zr,zc;
    cin>>r>>c>>zr>>zc;
    char multiplied[r*zr][c*zc];
    cin.ignore();
    string s;
    for(int i=0;i<r;i++){
        getline(cin,s);
        for(int k=0;k<s.length();k++) {
            for (int j = 0; j < zr; j++) {
                for (int q = 0; q < zc; q++) {
                    multiplied[i*zr + j][k*zc + q] = s[k];
                }
            }
        }
    }
    for(int i=0;i<r*zr;i++){
        for(int j=0;j<c*zc;j++){
            cout<<multiplied[i][j];
        }
        cout<<endl;
    }
}