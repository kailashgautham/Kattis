//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    unordered_map<string,char> m;
//    bool capsOn = false;
//    bool shiftOn = false;
//    m["whack"] = ' ';
//    m["clank"] = 'A';
//    m["bong"] = 'B';
//    m["click"] = 'C';
//    m["tap"] = 'D';
//    m["poing"] = 'E';
//    m["clonk"] = 'F';
//    m["clack"] = 'G';
//    m["ping"] = 'H';
//    m["tip"] = 'I';
//    m["cloing"] = 'J';
//    m["tic"] = 'K';
//    m["cling"] = 'L';
//    m["bing"] = 'M';
//    m["pong"] = 'N';
//    m["clang"] = 'O';
//    m["pang"] = 'P';
//    m["clong"] = 'Q';
//    m["tac"] = 'R';
//    m["boing"] = 'S';
//    m["boink"] = 'T';
//    m["cloink"] = 'U';
//    m["rattle"] = 'V';
//    m["clock"] = 'W';
//    m["toc"] = 'X';
//    m["clink"] = 'Y';
//    m["tuc"] = 'Z';
//    m["bump"] = '$';
//    m["pop"] = '%';
//    m["dink"] = '1';
//    m["thumb"] = '2';
//    int n;cin>>n;
//    string s;
//    string ans="";
//    while(n--){
//        cin>>s;
//        bool capslock = capsOn != shiftOn ? true : false;
//        if(m[s] >= 65 && m[s] <= 90) ans = capslock ? ans + m[s] : ans + (char)(m[s] + 32);
//        else if(m[s] == ' ') ans += ' ';
//        else if(m[s]=='$') capslock=!capslock;
//        else if(m[s]=='%'){
//            int newLength = ans.length() - 1;
//            ans = ans.substr(0, max(0, newLength));
//        }
//        else if(m[s]=='1')shiftOn=true;
//        else shiftOn=false;
//    }
//    cout<<ans;
//}