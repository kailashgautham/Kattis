//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    vector<vector<char>> board;
//    char n;
//    char win='_';
//    for(int i=0;i<3;i++){
//        vector<char> row;
//        for(int j=0;j<3;j++){
//            cin>>n;
//            row.push_back(n);
//        }
//        board.push_back(row);
//    }
//    if(board[0][0]==board[0][1]&&board[0][1]==board[0][2]&&board[0][2]!='_') win=board[0][0];
//    if(board[1][0]==board[1][1]&&board[1][1]==board[1][2]&&board[1][2]!='_') win=board[1][0];
//    if(board[2][0]==board[2][1]&&board[2][1]==board[2][2]&&board[2][2]!='_') win=board[2][0];
//    if(board[0][0]==board[1][0]&&board[1][0]==board[2][0]&&board[2][0]!='_') win=board[2][0];
//    if(board[0][1]==board[1][1]&&board[1][1]==board[2][1]&&board[2][1]!='_') win=board[2][1];
//    if(board[0][2]==board[1][2]&&board[1][2]==board[2][2]&&board[2][2]!='_') win=board[2][2];
//    if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[2][2]!='_') win=board[2][2];
//    if(board[0][2]==board[1][1]&&board[1][1]==board[2][0]&&board[2][0]!='_') win=board[2][0];
//    string s = win=='_' ? "ingen" : win=='X'?"Johan" : "Abdullah";
//    cout<<s<<" har vunnit";
//
//
//}
