#include"bits/stdc++.h"
using namespace std;
vector<int> addCorrectWrong(int mini, int maxi, vector<string>& errors, vector<string>& correct, int correctStart, vector<int>& e, int i) {
    if (mini == maxi) errors.push_back(to_string(mini));
    else errors.push_back(to_string(mini) + "-" + to_string(maxi));
    int correctEnd = mini - 1;
    if (correctStart != 0) {
        if (correctEnd == correctStart) correct.push_back(to_string(correctStart));
        else correct.push_back(to_string(correctStart) + "-" + to_string(correctEnd));
    }
    correctStart = maxi + 1;
    mini = e[i];
    maxi = e[i];
    return {correctStart, mini, maxi};
};
int mrcodeformatgrader(){
    int c,n,t;
    cin>>c>>n;
    vector<int> e;
    for(int i=0;i<n;i++){
        cin>>t;
        e.push_back(t);
    }
    vector<string> errors;
    vector<string> correct;
    int mini=0;
    int maxi=0;
    int correctStart = 0;
    for(int i=0;i<n;i++){
        if (i == 0) {
            mini = e[0];
            maxi = e[0];
            if (mini > 1) correctStart = 1;
            continue;
        }
        if (e[i] == maxi + 1) maxi += 1;
        else {
            vector<int> answers = addCorrectWrong(mini, maxi, errors, correct, correctStart, e, i);
            correctStart = answers[0];
            mini = answers[1];
            maxi = answers[2];
        }
    }
    vector<int> answers = addCorrectWrong(mini, maxi, errors, correct, correctStart, e, n - 1);
    correctStart = answers[0];
    if (correctStart <= c) {
        if (correctStart == c) correct.push_back(to_string(correctStart));
        else correct.push_back(to_string(correctStart) + "-" + to_string(c));
    }
    cout<<"Errors: ";
    for (int i = 0; i < errors.size(); i++) {
        if (i < errors.size() - 2) cout<<errors[i]<<", ";
        else if( i < errors.size() - 1) cout<<errors[i]<<" ";
        else cout<<"and "<<errors[i]<<endl;
    }
    cout<<"Correct: ";
    for (int i = 0; i < correct.size(); i++) {
        if (i < correct.size() - 2) cout<<correct[i]<<", ";
        else if( i < correct.size() - 1) cout<<correct[i]<<" ";
        else cout<<"and "<<correct[i];
    }
}


