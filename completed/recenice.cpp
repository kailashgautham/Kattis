//#include<bits/stdc++.h>
//using namespace std;
//
//int getNumberLength(int n){
//    int count=0;
//    if(n<=10){
//        count=(n==1||n==2||n==6||n==10)?3:(n==4||n==5||n==9)?4:5;
//    }
//    else if(n<20){
//        count=(n==11||n==12)?6:(n==13||n==14||n==18||n==19)?8:(n==15||n==16)?7:9;
//    }
//    else if(n<100){
//        int count1 = n/10;
//        count1=(count1==2||count1==3||count1==8||count1==9)?6:count1==7?7:5;
//        int count2=n%10;
//        count2=(count2==1||count2==2||count2==6)?3:(count2==4||count2==5||count2==9)?4:count2==0?0:5;
//        count = count1+count2;
//    }
//    else {
//        int count1 = (n%100)/10;
//        if(count1 > 1) {
//            count1 = (count1 == 2 || count1 == 3 || count1 == 8 || count1 == 9) ? 6 : count1 == 7 ? 7 : 5;
//            int count2 = (n % 100) % 10;
//            count2 = (count2 == 1 || count2 == 2 || count2 == 6) ? 3 : (count2 == 4 || count2 == 5 || count2 == 9) ? 4 :
//                                                                       count2 == 0 ? 0 : 5;
//            int count3 = (n / 100);
//            count3 = (count3 == 1 || count3 == 2 || count3 == 6) ? 3 : (count3 == 4 || count3 == 5 || count3 == 9) ? 4
//                                                                                                                   : 5;
//            count = count1 + count2 + count3;
//        } else if (count1 == 0) {
//            int count3 = (n / 100);
//            count3 = (count3 == 1 || count3 == 2 || count3 == 6) ? 3 : (count3 == 4 || count3 == 5 || count3 == 9) ? 4 : 5;
//            int count2 = (n % 100) % 10;
//            count2 = (count2 == 1 || count2 == 2 || count2 == 6) ? 3 : (count2 == 4 || count2 == 5 || count2 == 9) ? 4 :
//                                                                       count2 == 0 ? 0 : 5;
//            count = count3 + count2;
//        } else {
//            int count3 = (n / 100);
//            count3 = (count3 == 1 || count3 == 2 || count3 == 6) ? 3 : (count3 == 4 || count3 == 5 || count3 == 9) ? 4 : 5;
//            n = n%100;
//            count1=(n==11||n==12)?6:(n==13||n==14||n==18||n==19)?8:(n==15||n==16)?7:(n==10)?3:9;
//            count = count1 + count3;
//        }
//        count += 7;
//    }
//    return count;
//}
//
//string singleDigitToString(int num){
//    string s;
//    switch(num){
//        case 1:
//            s="one";
//            break;
//        case 2:
//            s="two";
//            break;
//        case 3:
//            s="three";
//            break;
//        case 4:
//            s="four";
//            break;
//        case 5:
//            s="five";
//            break;
//        case 6:
//            s="six";
//            break;
//        case 7:
//            s="seven";
//            break;
//        case 8:
//            s="eight";
//            break;
//        case 9:
//            s="nine";
//            break;
//        case 10:
//            s="ten";
//            break;
//        default: s="";
//    }
//    return s;
//}
//
//string doubleToString(int num){
//    string s;
//    switch(num){
//        case 10:
//            s="ten";
//            break;
//        case 11:
//            s="eleven";
//            break;
//        case 12:
//            s="twelve";
//            break;
//        case 13:
//            s="thirteen";
//            break;
//        case 14:
//            s="fourteen";
//            break;
//        case 15:
//            s="fifteen";
//            break;
//        case 16:
//            s="sixteen";
//            break;
//        case 17:
//            s="seventeen";
//            break;
//        case 18:
//            s="eighteen";
//            break;
//        case 19:
//            s="nineteen";
//            break;
//    }
//    return s;
//}
//
//string tensToString(int num){
//    string s;
//    switch(num){
//        case 2:
//            s="twenty";
//            break;
//        case 3:
//            s="thirty";
//            break;
//        case 4:
//            s="forty";
//            break;
//        case 5:
//            s="fifty";
//            break;
//        case 6:
//            s="sixty";
//            break;
//        case 7:
//            s="seventy";
//            break;
//        case 8:
//            s="eighty";
//            break;
//        case 9:
//            s="ninety";
//            break;
//    }
//    return s;
//}
//
//string numberToString(int num){
//    string s="";
//    if(num<=10) s = singleDigitToString(num);
//    else if(num < 20) s = doubleToString(num);
//    else if(num < 100) {
//        string s1 = tensToString(num/10);
//        string s2 = singleDigitToString(num%10);
//        s=s1+s2;
//    }
//    else {
//        int count1 = (num%100)/10;
//        int count2=(num%100)%10;
//        int count3 = (num/100);
//        string s3 = singleDigitToString(count3) + "hundred";
//        if (count1==0){
//            string s2 = singleDigitToString(count2);
//            s=s3+s2;
//        } else if(count1==1){
//            string s2 = doubleToString(num%100);
//            s=s3+s2;
//        } else {
//            string s2 = tensToString(count1);
//            string s1 = singleDigitToString(count2);
//            s = s3 + s2 + s1;
//        }
//        return s;
//    }
//    return s;
//}
//
//
//int main(){
//    int n;cin>>n;
//    vector<string> words;
//    string s;
//    int count=0;
//    while(n--){
//        cin>>s;
//        words.push_back(s);
//        count+=s.length();
//    }
//    count--;
//    int num=0;
//    for(int i=1;i<1000;i++){
//        if(getNumberLength(i) + count == i) {
//            num = i;
//            break;
//        }
//    }
//    string number = numberToString(num);
//    for(string q : words) {
//        if(q!=string{"$"})cout<<q<<" ";
//        else cout<<number<<" ";
//    }
////    for(int i=1;i<1000;i++){
////        if(numberToString(i).length() != getNumberLength(i)) cout<<i<<" getNumberLength: "<<getNumberLength(i)<<endl;
//////        cout<<i<<": "<<numberToString(i)<<endl;
////    }
//}