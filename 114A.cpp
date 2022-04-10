#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
#include <stdio.h>
using ll=long long int;
using namespace std;
void solve(int n,int k,int l,int c){
    if(k==l){
        cout<<"YES"<<endl;
        cout<<c;
        return;
    }
    else if(k>l){
        cout<<"NO";
        return;
    }
    k=k*n;
    c++;
    solve(n,k,l,c);
}


int main(){
//int t;cin>>t;
//while(t--){
    ll n,l,c=0;cin>>n>>l;
    ll k=n;
    while(1){
        if(k==l){
            cout<<"YES"<<endl;
            cout<<c;
            break;
        }
        else if(k>l){
            cout<<"NO";
            break;
        }
        k=k*n;
        c++;

    }
}
//}