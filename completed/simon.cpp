#include"bits/stdc++.h"
using namespace std;
void simon(){
    int n;cin>>n;
    char buffer[1000];
    cin.ignore();
    for (int i = 0; i < n; ++i) {
        cin.getline(buffer, 1000);
        char *token = strtok(buffer, " ");
        if (token&&strcmp(token, "simon") == 0) {
            token = strtok(nullptr, " ");
            if (token&&strcmp(token, "says") == 0) {
                token = strtok(nullptr, " ");
                while (token != nullptr) {
                    cout << token << " ";
                    token = strtok(NULL, " ");
                }
            }
        }
        cout<<endl;
    }
}