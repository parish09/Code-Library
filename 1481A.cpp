#include <iostream>
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define endl '\n'
#define fl(i, l, r) for(int i=(int)(l);i<(int)(r);i++)
#define fld(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)
using namespace std;

void solve(){
    int x,y;cin>>x>>y;
    string s;cin>>s;
    char a,b;
    if(x>0)a='R';
    else a='L';
    if(y>0)b='U';
    else b='D';
    x=abs(x),y=abs(y);
    for(auto c:s){
        if(c==a)x--;
        if(c==b)y--;
    }
    if(y>0 or x>0)cout<<"NO\n";
    else cout<<"YES\n";
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        solve();
    }
}