#include <iostream>

#include <string>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
typedef long long ll;
using namespace std;

int main(){
fast;tie;
    int a,b;cin>>a>>b;
    int x=max(a,b);
    if(x==6)cout<<"1/6";
    else if(x==1)cout<<"1/1";
    else if(x==2)cout<<"5/6";
    else if(x==3)cout<<"2/3";
    else if(x==4)cout<<"1/2";
    else if(x==5)cout<<"1/3";
}