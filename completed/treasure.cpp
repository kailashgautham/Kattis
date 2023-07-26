//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int r,c;
//    cin>>r>>c;
//    char q;
//    vector<vector<char>> board;
//    vector<vector<bool>> visited;
//    for(int i=0;i<r;i++){
//        vector<char> row;
//        vector<bool> visitedrow;
//        for(int j=0;j<c;j++){
//            cin>>q;
//            row.push_back(q);
//            visitedrow.push_back(false);
//        }
//        board.push_back(row);
//        visited.push_back(visitedrow);
//    }
//    int x=0;
//    int y=0;
//    int moves=0;
//    while(x<r&&y<c&&x>-1&&y>-1){
//        if(visited[x][y]) break;
//        visited[x][y] = true;
//        if(board[x][y] == 'N') x--;
//        else if(board[x][y] == 'S') x++;
//        else if(board[x][y] == 'W') y--;
//        else if(board[x][y] == 'E') y++;
//        else {
//            cout<<moves;
//            return 0;
//        }
//        moves += 1;
//    }
//    if(x<r&&y<c&&x>-1&&y>-1)cout<<"Lost";
//    else cout<<"Out";
//}