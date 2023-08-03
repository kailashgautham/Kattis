//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int n;
//    string s="";
//    while(cin>>n&&n!=0){
//        if(s!="")cout<<endl<<endl;
//        int maxLength=0;
//        cin.ignore();
//        vector<string> grid;
//        for(int i=0;i<n;i++){
//            getline(cin,s);
//            grid.push_back(s);
//            int length = s.length();
//            maxLength= max(maxLength, length);
//        }
//        for(int i=0;i<n;i++){
//            while(grid[i].length() < maxLength) grid[i]+=' ';
//        }
//        for(int j=0;j<grid[0].length();j++){
//            int spaceCount=0;
//            for(int i=n-1;i>=0;i--){
//                if(grid[i][j]==' ') {
//                    spaceCount++;
//                    continue;
//                }
//                for(int k=0;k<spaceCount;k++) cout<<' ';
//                spaceCount=0;
//                if(grid[i][j]=='-')cout<<'|';
//                else if(grid[i][j]=='|')cout<<'-';
//                else cout<<grid[i][j];
//            }
//            if(j<grid[0].length()-1)cout<<endl;
//        }
//    }
//}
//
