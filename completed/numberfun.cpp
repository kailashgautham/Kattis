#include "bits/stdc++.h"
#include "functions.h"
using namespace std;

void numberfun(){
    int n;cin>>n;
    float a,b,c;
    for(int i=0;i<n;i++) {
        cin >> a >> b >> c;
        if (a + b == c || a - b == c || b - a == c || a * b == c || a / b == c || b / a == c)cout << "Possible" << endl;
        else cout << "Impossible" << endl;
    }
}