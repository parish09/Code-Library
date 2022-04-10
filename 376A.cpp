#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
using ll=long long int;
using namespace std;

int main(){
    fast;tie;
    ll x,left=0,right=0,num;
    string str;cin>>str;
    for(int i=0;i<str.length();i++){
        if(str[i]=='^')x=i;
    }
    //cout<<x;
    for(int i=0;i<x;i++){
        if((int)str[i]>=49 && (int)str[i]<=57){
                 if(str[i]==49)num=1;
            else if(str[i]==50)num=2;
            else if(str[i]==51)num=3;
            else if(str[i]==52)num=4;
            else if(str[i]==53)num=5;
            else if(str[i]==54)num=6;
            else if(str[i]==55)num=7;
            else if(str[i]==56)num=8;
            else if(str[i]==57)num=9;
            left+=num*(x-i);
        }
    }
    //cout<<left;
    for(int i=x+1;i<str.length();i++){
        if((int)str[i]>=49 && (int)str[i]<=57){
                 if(str[i]==49)num=1;
            else if(str[i]==50)num=2;
            else if(str[i]==51)num=3;
            else if(str[i]==52)num=4;
            else if(str[i]==53)num=5;
            else if(str[i]==54)num=6;
            else if(str[i]==55)num=7;
            else if(str[i]==56)num=8;
            else if(str[i]==57)num=9;
            right+=num*(i-x);
        }
    }
    //cout<<right;
    if(left==right)cout<<"balance";
    else if(left>right)cout<<"left";
    else cout<<"right";
}