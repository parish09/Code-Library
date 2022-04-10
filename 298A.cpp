#include <iostream>
#include <string>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
//using ll=long long int;
using namespace std;

int main(){
fast;tie;
    int n,s,t;cin>>n;
    string str;cin>>str;
    bool left=false,right=false;
    for(int i=0;i<n;i++){
        if(str[i]=='R'){
            s=i+1;
            right=true;
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(str[i]=='L'){
            t=i;
            left=true;
            break;
        }
    }
    if(left==false){
        for(int i=n-1;i>=0;i--){
            if(str[i]=='R'){
            t=i+2;
            //cout<<t<<i<<" ";
            break;
            }
        }
    }
    if(right==false){
        for(int i=n-1;i>=0;i--){
            if(str[i]=='L'){
            s=i+1;
            //cout<<t<<i<<" ";
            break;
            }
        }
        for(int i=0;i<n;i++){
        if(str[i]=='L'){
            t=i;
            left=true;
            break;
        }
    }
    }
    cout<<s<<" "<<t;
}