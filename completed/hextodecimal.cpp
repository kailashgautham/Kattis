//#include<bits/stdc++.h>
//using namespace std;
//
//void hexToDecimal(string hex){
//    for(int i=0;i<hex.length();i++) hex[i] = toupper(hex[i]);
//    int answer=0;
//    vector<int> letters{10, 11, 12, 13, 14, 15};
//    for(int i=0;i<hex.length();i++){
//        int currDigit = hex[hex.length() - i - 1] >= 'A' ? letters[hex[hex.length() - i - 1] - 65] : hex[hex.length() - i - 1] - '0';
//        answer += pow(16, i) * currDigit;
//    }
//    cout<<" "<<answer<<endl;
//}
//
//
//int main(){
//    string s;
//    while(getline(cin,s)) {
//        int startIndex = -1;
//        int endIndex = 0;
//        bool hexFound = false;
//        for(int i=0;i<s.length();i++){
//            if(hexFound && (endIndex - startIndex == 9 || s[i] < '0' || (s[i] > '9' && s[i] < 'A') || (s[i] > 'F' && s[i] < 'a') || (s[i] > 'f') || (i < s.length() - 1 && s[i] == '0' && (s[i+1]=='x'||s[i+1]=='X')))) {
//                hexFound = false;
//                cout<<s.substr(startIndex, endIndex - startIndex + 1);
//                hexToDecimal(s.substr(startIndex, endIndex - startIndex + 1));
//                startIndex = -1;
//            } else if(hexFound) endIndex += 1;
//            else if(s[i]=='0') startIndex = i;
//            else if(startIndex == i-1 && (s[i] == 'X' || s[i] == 'x')) {
//                hexFound = true;
//                endIndex = startIndex + 1;
//            }
//        }
//        if(hexFound) {
//            cout<<s.substr(startIndex, endIndex - startIndex + 1);
//            hexToDecimal(s.substr(startIndex, endIndex - startIndex + 1));
//        }
//    }
//}