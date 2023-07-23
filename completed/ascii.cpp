#include"bits/stdc++.h"
using namespace std;

char getChar(vector<string>& input, int idx){
    //0, 2, 3, 5, 6, 7, 8, 9
    if(input[0].substr(idx, 5) == "xxxxx"){
        //0, 6, 8
        if(input[0][idx] == 'x' && input[1][idx] == 'x' &&input[2][idx] == 'x' &&input[3][idx] == 'x' &&input[4][idx] == 'x' &&input[5][idx] == 'x' &&input[6][idx] == 'x'){
            if(input[3].substr(idx, 5) == "xxxxx"){
                if(input[1][idx+4] == 'x') return '8';
                else return '6';
            } else return '0';
        }
        //2, 3, 5, 9
        if(input[6].substr(idx, 5) == "xxxxx"){
            if(input[1][idx]=='x'&&input[1][idx+4]=='x') return'9';
            if(input[1][idx]=='x')return'5';
            if(input[1][idx+4]=='x'&&input[4][idx]=='x')return'2';
            return '3';
        }
        return '7';
    }
        //1, 4, +
    else if(input[3].substr(idx, 5) == "xxxxx") {
        if(input[0][idx]=='x') return '4';
        else return '+';
    }
    else return '1';
}

void printNum(char n, vector<string>& ans, bool last){
    if(n=='0'){
        ans[0]+="xxxxx";
        ans[1]+="x...x";
        ans[2]+="x...x";
        ans[3]+="x...x";
        ans[4]+="x...x";
        ans[5]+="x...x";
        ans[6]+="xxxxx";
    }
    if(n=='1'){
        ans[0]+="....x";
        ans[1]+="....x";
        ans[2]+="....x";
        ans[3]+="....x";
        ans[4]+="....x";
        ans[5]+="....x";
        ans[6]+="....x";
    }
    if(n=='2'){
        ans[0]+="xxxxx";
        ans[1]+="....x";
        ans[2]+="....x";
        ans[3]+="xxxxx";
        ans[4]+="x....";
        ans[5]+="x....";
        ans[6]+="xxxxx";
    }
    if(n=='3'){
        ans[0]+="xxxxx";
        ans[1]+="....x";
        ans[2]+="....x";
        ans[3]+="xxxxx";
        ans[4]+="....x";
        ans[5]+="....x";
        ans[6]+="xxxxx";
    }
    if(n=='4'){
        ans[0]+="x...x";
        ans[1]+="x...x";
        ans[2]+="x...x";
        ans[3]+="xxxxx";
        ans[4]+="....x";
        ans[5]+="....x";
        ans[6]+="....x";
    }
    if(n=='5'){
        ans[0]+="xxxxx";
        ans[1]+="x....";
        ans[2]+="x....";
        ans[3]+="xxxxx";
        ans[4]+="....x";
        ans[5]+="....x";
        ans[6]+="xxxxx";
    }
    if(n=='6'){
        ans[0]+="xxxxx";
        ans[1]+="x....";
        ans[2]+="x....";
        ans[3]+="xxxxx";
        ans[4]+="x...x";
        ans[5]+="x...x";
        ans[6]+="xxxxx";
    }
    if(n=='7'){
        ans[0]+="xxxxx";
        ans[1]+="....x";
        ans[2]+="....x";
        ans[3]+="....x";
        ans[4]+="....x";
        ans[5]+="....x";
        ans[6]+="....x";
    }
    if(n=='8'){
        ans[0]+="xxxxx";
        ans[1]+="x...x";
        ans[2]+="x...x";
        ans[3]+="xxxxx";
        ans[4]+="x...x";
        ans[5]+="x...x";
        ans[6]+="xxxxx";
    }
    if(n=='9'){
        ans[0]+="xxxxx";
        ans[1]+="x...x";
        ans[2]+="x...x";
        ans[3]+="xxxxx";
        ans[4]+="....x";
        ans[5]+="....x";
        ans[6]+="xxxxx";
    }
    if(!last){
        ans[0]+=".";
        ans[1]+=".";
        ans[2]+=".";
        ans[3]+=".";
        ans[4]+=".";
        ans[5]+=".";
        ans[6]+=".";
    }
}

int ascii(){
    vector<string> input;
    string s;
    string num1="";
    string num2="";
    vector<string> ans;
    for(int i=0;i<7;i++){
        cin>>s;
        input.push_back(s);
        ans.push_back("");
    }
    bool foundplus=false;
    for(int i=0;i<s.length();i+=6){
        char a = getChar(input,i);
        if(a == '+') foundplus=true;
        else if(foundplus) num2+=a;
        else num1+=a;
    }
    string answer = to_string(stoi(num1)+stoi(num2));
    for(int i=0;i<answer.length();i++) {
        printNum(answer[i], ans, i==answer.length()-1);
    }
    for(string q : ans) cout<<q<<endl;
}
