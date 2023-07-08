//#include<bits/stdc++.h>
//using namespace std;
//bool rhymer(string, char*);
//int rhyming(){
//    unordered_map<string,int> map;
//    string rhyme;cin>>rhyme;
//    int n;cin>>n;
//    cin.ignore();
//    bool r=false;
//    for(int i=0;i<n;++i){
//        char buffer[1000];
//        cin.getline(buffer, 1000);
//        char* token=strtok(buffer, " ");
//        unordered_map<string, int> tempMap;
//        while(token!=nullptr){
//            tempMap[token]=1;
//            if(!r && rhymer(rhyme, token)) r=true;
//            token=strtok(NULL, " ");
//        }
//        if(r)map.insert(tempMap.begin(), tempMap.end());
//        r=false;
//    }
//    cin>>n;
//    cin.ignore();
//    for(int i=0;i<n;++i){
//        char buffer[1000];
//        cin.getline(buffer, 1000);
//        char* token=strtok(buffer, " ");
//        char* temp={};
//        while(token!=nullptr){
//            temp=token;
//            token=strtok(NULL, " ");
//        }
//        if(temp==NULL){
//            cout<<"NO"<<endl;
//            continue;
//        }
//        char sub[strlen(temp)+1];
//        for(int i=0;i<strlen(temp);i++){
//            strncpy(sub, temp + i, strlen(temp) - i);
//            sub[strlen(temp)-i]='\0';
//            if(map[sub]!=0){
//                r=true;
//                break;
//            }
//        }
//        if(r)cout<<"YES"<<endl;
//        else cout<<"NO"<<endl;
//        r=false;
//    }
//}
//
//bool rhymer(string rhyme, char* curr){
//
//    for(int i=0;i<rhyme.length();i++){
//        if(rhyme.substr(i, rhyme.length()) == curr) return true;
//    }
//    return false;
//}