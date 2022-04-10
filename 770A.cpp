#include <iostream>

#include <string>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
typedef long long ll;
using namespace std;

int main(){
fast;tie;
    int n,k,c=0;cin>>n>>k;
    string x="",y="";
    for(int i=0;i<k;i++){
        x+=(char)(i+97);
        c++;
    }
    int a=0;
    while(y.length()!=n){
        if(a==k)a=0;
        y=y+x[a];
        a++;
    }
    cout<<y;
}