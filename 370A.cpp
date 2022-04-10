#include <iostream>
#include <string>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
//using ll=long long int;
using namespace std;

int main(){
fast;tie;
    int r1,c1,r2,c2;cin>>r1>>c1>>r2>>c2;
    if(r1==r2 or c1==c2)cout<<1;
    else cout<<2;
    cout<<" ";
    if((r1+c1)%2==(r2+c2)%2){
        if(r1+c1==r2+c2 or r1-c1==r2-c2)cout<<1;
        else cout<<2;
    }
    else cout<<0;
    cout<<" ";
    cout<<max(abs(r1-r2),abs(c1-c2));
}