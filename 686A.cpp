#include <iostream>

#include <string>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
typedef long long ll;
using namespace std;

int main(){
fast;tie;
    ll n,x,b,c=0;cin>>n>>x;
    char a;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(a=='+')x=x+b;
        else if(a=='-'){
            if(b<=x)x=x-b;
            else c++;
        }
    }
    cout<<x<<" "<<c;
}