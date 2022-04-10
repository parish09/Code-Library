#include <iostream>
#include <string>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
//using ll=long long int;
using namespace std;


int main(){
fast;tie;
    int n;cin>>n;
    string x;cin>>x;
    for(int i=0;i<n-2;i++){
        char a=x[i],b=x[i+2];
             if(a=='L' and b=='L')cout<<i+1<<" "<<i+3<<endl;
        else if(a=='R' and b=='R')cout<<i+1<<" "<<i+3<<endl;
        else if(a=='R' and b=='L')cout<<i+3<<" "<<i+1<<endl;
        else if(a=='L' and b=='R')cout<<i+1<<" "<<i+3<<endl;
    }
}