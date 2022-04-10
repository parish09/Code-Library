#include <iostream>
#include <string>
#include <unordered_map>
#include <sstream>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
#include <stdio.h>
#include <set>
#define fast ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
typedef unsigned long long ll;
using namespace std;

int main(){
fast;tie;
	unordered_map<ll,ll> m;
    ll n,x=0;cin>>n;
    n=n*2;
    bool flag=false;
    vector<ll> v;
    for(ll i=1;i<=sqrt(n*2+1);i++){
        m[x]=i*(i+1);
        x++;
    }
    /*for(ll i=0;i<v.size();i++){
        for(ll j=i;j<v.size();j++){
            //cout<<v[i]<<v[j]<<endl;
            if((v[i]+v[j])==n){
                flag=true;
                break;

            }
        }
        if(flag)break;
    }*/
    if(m.find(n-m[0])!=m.end())flag=false;
    else false;
    if(flag)cout<<"YES";
    else cout<<"NO";
}