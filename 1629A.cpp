#include <iostream>
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define endl '\n'
#define fl(i, l, r) for(int i=(int)(l);i<(int)(r);i++)
#define fld(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)
using namespace std;

void solve(){
    int n,k;cin>>n>>k;
    vector<pair<int,int>> v(n);
    fl(i,0,n)cin>>v[i].first;
    fl(i,0,n)cin>>v[i].second;
    sort(v.begin(),v.end());
    fl(i,0,n){
        if(k>=v[i].first)k+=v[i].second;
    }
    cout<<k<<endl;
    
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        solve();
    }
}