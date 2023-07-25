//#include<bits/stdc++.h>
//using namespace std;
//int dow(int m,int d,int y) {
//    y-=m<3;
//    return(y+y/4-y/100+y/400+"-bed=pen+mad."[m]+d)%7;
//}
//int main() {
//    int y;
//    cin >> y;
//    bool leap = (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0));
//    int oneMayDay = dow(5, 1, y) - 1;
//    if (oneMayDay == -1) oneMayDay = 6;
//    int oneJuneDay = dow(6, 1, y) - 1;
//    if (oneJuneDay == -1) oneJuneDay = 6;
//
//    int extraDays = 0;
//    while (oneMayDay < 6) {
//        oneMayDay += 1;
//        extraDays += 1;
//    }
//    oneMayDay = leap ? 122 : 121;
//    oneMayDay += extraDays + 7;
//    extraDays = 0;
//    while (oneJuneDay < 6) {
//        oneJuneDay += 1;
//        extraDays += 1;
//    }
//    oneJuneDay = leap ? 153 : 152;
//    oneJuneDay += extraDays + 14;
//    if (oneJuneDay - oneMayDay <= 35) cout<<"5 weeks";
//    else cout<<"6 weeks";
//}
//
