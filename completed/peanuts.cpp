#include"bits/stdc++.h"
using namespace std;
struct box {
    pair<float,float> point1;
    pair<float,float> point2;
    string size;
};

struct peanut {
    pair<float,float> point;
    string size;
};

box createBox(){
    box b;
    pair<float,float> p1;
    cin>>p1.first;
    cin>>p1.second;
    pair<float,float> p2;
    cin>>p2.first;
    cin>>p2.second;
    string s;cin>>s;
    b.point1=p1;
    b.point2=p2;
    b.size=s;
    return b;
}

peanut createPeanut() {
    peanut p;
    pair<float,float> p1;
    cin>>p1.first;
    cin>>p1.second;
    string s;cin>>s;
    p.point=p1;
    p.size=s;
    return p;
}

int peanuts(){
    int n,m;
    vector<box> boxes;
    vector<peanut> peanuts;
    bool inBox = false;
    while(cin>>n&&n){
        for(int i=0;i<n;i++) boxes.push_back(createBox());
        cin>>m;
        for(int i=0;i<m;i++) peanuts.push_back(createPeanut());
        for(peanut p : peanuts) {
            for (box b : boxes) {
                if (p.point.first >= b.point1.first && p.point.first <= b.point2.first && p.point.second >= b.point1.second && p.point.second <= b.point2.second) {
                    cout<<p.size<<" ";
                    if (b.size == p.size) cout<<"correct";
                    else cout<<b.size;
                    cout<<endl;
                    inBox = true;
                    break;
                }
            }
            if (!inBox) cout<<p.size <<" floor"<<endl;
            inBox = false;
        }
        cout<<endl;
        boxes.clear();
        peanuts.clear();
    }
}

