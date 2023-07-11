#include"bits/stdc++.h"
using namespace std;
int starbattles1() {
    int regions[10] = {0};
    int rows[10] = {0};
    int cols[10] = {0};
    int regionGrid[10][10];
    string s;
    int twoRegions=0;
    char solution[10][10];
    for(int i=0;i<10;i++){
        getline(cin, s);
        for(int j=0;j<10;j++){
            regionGrid[i][j]=stoi(string{s[j]});
        }
    }
    for(int i=0;i<10;i++){
        getline(cin, s);
        for(int j=0;j<10;j++){
            solution[i][j]=s[j];
        }
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(solution[i][j]=='*'){
                rows[i]+=1;
                cols[j]+=1;
                regions[regionGrid[i][j]]+=1;
                if(rows[i]==2)twoRegions+=1;
                if(cols[j]==2)twoRegions+=1;
                if(regions[regionGrid[i][j]]==2)twoRegions+=1;
                if(rows[i]>2||cols[j]>2||regions[regionGrid[i][j]]>2||(i>0&&solution[i-1][j]=='*')||(j>0&&solution[i][j-1]=='*')||(i<9&&solution[i+1][j]=='*')||(j<9&&solution[i][j+1]=='*')||(i>0&&j>0&&solution[i-1][j-1]=='*')||(i>0&&j<9&&solution[i-1][j+1]=='*')||(i<9&&j>0&&solution[i+1][j-1]=='*')||(i<9&&j<9&&solution[i+1][j+1]=='*')) {
                    cout<<"invalid"<<endl;
                        return 0;
                }
            }
        }
    }
    if(twoRegions==30)
        cout<<"valid";
    else cout<<"invalid";
    return 0;
}