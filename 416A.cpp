#include <iostream>
#include <string>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
//using ll=long long int;
using namespace std;

int main(){
fast;tie;
    int t,ans,max=2000000000,min=-2000000000;cin>>t;
    for(int i=0;i<t;i++){
        string x,y;cin>>x;
        int num;cin>>num;cin>>y;
        //int len=x.length()-2;
        bool ltet=0,mtet=0,mt=0,lt=0,yes=0,no=0;
        if(x.find("<=")!=-1)ltet=true;
        else if(x.find(">=")!=-1)mtet=true;
        else if(x.find("<")!=-1)lt=true;
        else if(x.find(">")!=-1)mt=true;
        if(mtet==true){
            if(y=="Y"){
                if(num>min)min=num;
            }
            else{
                if(num-1<max)max=num-1;
            }
        }
        else if(ltet==true){
            if(y=="Y"){
                if(num<max)max=num;
            }
            else{
                if(num+1>min)min=num+1;
            }
        }
        if(lt==true){
            if(y=="Y"){
                if(num-1<max)max=num-1;
            }
            else{
                if(num>min)min=num;
            }
        }
        if(mt==true){
            if(y=="Y"){
                if(num+1>min)min=num+1;
            }
            else{
                if(num<max)max=num;
            }
        }
        //cout<<max<<" "<<min<<endl;
    }
    //cout<<max<<min<<max-min<<endl;
    if((max>=min))cout<<min;
    else cout<<"Impossible";
}