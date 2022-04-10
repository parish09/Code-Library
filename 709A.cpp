#include <iostream>

#include <string>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
typedef long long ll;
using namespace std;

int main(){
fast;tie;
    int s=0,n,b,d,c=0;cin>>n>>b>>d;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x<=b){
            s+=x;
            if(s>d){
                c++;
                s=0;
            }
        }
    }
    cout<<c;
}