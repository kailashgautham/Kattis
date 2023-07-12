#include<bits/stdc++.h>
using namespace std;
int drunkvigenere(){
    string key;
    string word;
    getline(cin,word);
    getline(cin,key);
    for(int i=0;i<word.length();i++){
        if(i%2==0){
            word[i] = word[i] - key[i] + 65;
            if (word[i] < 65) {
                word[i] = 91 - (65 - word[i]);
            }
        } else {
            word[i] = word[i] + key[i] - 65;
            if (word[i] > 90) {
                word[i] = word[i] - 90 + 64;
            }
        }
    }
    cout<<word;
}
