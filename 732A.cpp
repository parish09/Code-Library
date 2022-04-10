#include <iostream>

#include <string>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
typedef long long ll;
using namespace std;

int main(){
fast;tie;
    int k,r,a;cin>>k>>r;
    int t=k/10;
    if(k%10==0 or(t*10+r==k))cout<<1;
    else{
        int x,y=k%10;
        for(int i=1;i<=10;i++){
            x=y*i;//cout<<x<<" ";
            if((x%10==0) or ((x-r)%10==0)){
                a=i;
                break;
            }
        }
        cout<<a;
    }
}