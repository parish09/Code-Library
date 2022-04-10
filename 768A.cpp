#include <iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,mx=INT_MIN,mn=INT_MAX;cin>>n;
    unordered_map<int,int> um;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x>mx)mx=x;
        if(x<mn)mn=x;
        um[x]++;
    }
    int count=0;
    for(auto i:um){
        if(i.first==mn or i.first==mx)continue;
        else{
            count+=i.second;
        }
    }
    cout<<count;
}