#include <iostream>

#include <string>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
typedef long long ll;
using namespace std;

int main(){
fast;tie;
    int a,b,c,d,s=0;cin>>a>>b>>c>>d;
    string x;cin>>x;
    for(int i=0;i<x.length();i++){
        if(int(x[i])==49)s+=a;
        if(int(x[i])==50)s+=b;
        if(int(x[i])==51)s+=c;
        if(int(x[i])==52)s+=d;
    }
    cout<<s;
}