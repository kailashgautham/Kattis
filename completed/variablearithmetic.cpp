//#include<bits/stdc++.h>
//using namespace std;
//bool isNumber(const string& s)
//{
//    for (char const &ch : s) {
//        if (std::isdigit(ch) == 0)
//            return false;
//    }
//    return true;
//}
//int main(){
//    unordered_map<string,int> m;
//    string s;
//    while(getline(cin,s)&&s!="0"){
//        vector<string> input;
//        input.push_back("0");
//        stringstream ss(s);
//        string word;
//        string prev;
//        while(ss >> word) {
//            if(word == string{"="}) {
//                ss>>word;
//                m[prev] = stoi(word);
//                input.clear();
//            }
//            else if(m.find(word) != m.end() || isNumber(word)) {
//                if (isNumber(word)) input[0] = to_string(stoi(input[0]) + stoi(word));
//                else input[0] = to_string(stoi(input[0]) + m[word]);
//            }
//            else if(word != "+")input.push_back(word);
//            prev = word;
//        }
//        for(int i=0;i<input.size();i++) {
//            if(input[i] == "0") continue;
//            cout<<input[i];
//            if(i < input.size() - 1) cout<< " + ";
//            if(i == input.size() - 1) cout<<endl;
//        }
//    }
//}