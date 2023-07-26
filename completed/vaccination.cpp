//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int n;cin>>n;
//    char c;
//    cout<<fixed<<setprecision(10);
//    vector<char> vaccinated;
//    vector<string> efficacy;
//    float vax=0.0;
//    float control=0.0;
//    for(int i=0;i<n;i++){
//        cin>>c;
//        vaccinated.push_back(c);
//        if(c=='Y')vax++;
//        else control++;
//        string y="";
//        cin>>c;y+=c;cin>>c;y+=c;cin>>c;y+=c;
//        efficacy.push_back(y);
//    }
//    float aControl,bControl,cControl;
//    aControl=0.0;bControl=0.0;cControl=0.0;
//    float aVax,bVax,cVax;
//    aVax=0.0;bVax=0.0;cVax=0.0;
//    for(int i=0;i<n;i++){
//        if(vaccinated[i]=='Y'){
//            aVax = efficacy[i][0]=='Y'?aVax+1:aVax;
//            bVax = efficacy[i][1]=='Y'?bVax+1:bVax;
//            cVax = efficacy[i][2]=='Y'?cVax+1:cVax;
//            continue;
//        }
//        aControl = efficacy[i][0]=='Y'?aControl+1:aControl;
//        bControl = efficacy[i][1]=='Y'?bControl+1:bControl;
//        cControl = efficacy[i][2]=='Y'?cControl+1:cControl;
//    }
//    aVax = aVax / vax;
//    bVax = bVax / vax;
//    cVax = cVax / vax;
//    aControl = aControl / control;
//    bControl = bControl / control;
//    cControl = cControl / control;
//    if(aVax >= aControl) cout<<"Not Effective"<<endl;
//    else cout<<100 - (aVax / aControl) * 100<<endl;
//    if(bVax >= bControl) cout<<"Not Effective"<<endl;
//    else cout<<100 - (bVax / bControl) * 100<<endl;
//    if(cVax >= cControl) cout<<"Not Effective"<<endl;
//    else cout<<100 - (cVax / cControl) * 100<<endl;
//}