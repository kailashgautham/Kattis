//#include<bits/stdc++.h>
//using namespace std;
//vector<vector<char>> convertBoard(string played, string board){
//    vector<vector<char>> bo;
//    for(int i=0;i<7;i+=3){
//        vector<char> v;
//        for(int j=0;j<3;j++){
//            if(played[i+j]=='1') v.push_back('X');
//            else if(board[i+j]=='1')v.push_back('O');
//            else v.push_back('_');
//        }
//        bo.push_back(v);
//    }
//    return bo;
//}
//
//bool boardCompleted(string s){
//    if(s==string{"111111111"}) return true;
//    return false;
//}
//
//string convertToBinary(int n){
//    string s;
//    while(n>0){
//        s += (n%2 + '0');
//        n = n/2;
//    }
//    while(s.length() < 19) s += '0';
//    reverse(s.begin(), s.end());
//    return s;
//}
//int main(){
//    int n;cin>>n;
//    string s;
//    while(n--){
//        int d=0;
//        cin>>s;
//        for(int i=0;i<s.length();i++) d+=((s[i]-'0') * pow(8, s.length() - i - 1));
//        vector<vector<char>> board = convertBoard(convertToBinary(d).substr(1, 9), convertToBinary(d).substr(10, 9));
//        char win='_';
//        if(board[0][0]==board[0][1]&&board[0][1]==board[0][2]&&board[0][2]!='_') win=board[0][0];
//        if(board[1][0]==board[1][1]&&board[1][1]==board[1][2]&&board[1][2]!='_') win=board[1][0];
//        if(board[2][0]==board[2][1]&&board[2][1]==board[2][2]&&board[2][2]!='_') win=board[2][0];
//        if(board[0][0]==board[1][0]&&board[1][0]==board[2][0]&&board[2][0]!='_') win=board[2][0];
//        if(board[0][1]==board[1][1]&&board[1][1]==board[2][1]&&board[2][1]!='_') win=board[2][1];
//        if(board[0][2]==board[1][2]&&board[1][2]==board[2][2]&&board[2][2]!='_') win=board[2][2];
//        if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[2][2]!='_') win=board[2][2];
//        if(board[0][2]==board[1][1]&&board[1][1]==board[2][0]&&board[2][0]!='_') win=board[2][0];
//        if(win=='X') cout<<"X wins"<<endl;
//        else if(win=='O')cout<<"O wins"<<endl;
//        else if(boardCompleted(convertToBinary(d).substr(10, 9))) cout<<"Cat's"<<endl;
//        else cout<<"In progress"<<endl;
//    }
//}