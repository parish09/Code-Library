#include <iostream>
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define endl '\n'
#define fl(i, l, r) for(int i=(int)(l);i<(int)(r);i++)
#define fld(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)
using namespace std;

void solve(){
    int l,r,k;cin>>l>>r>>k;
    if(r-l==0){
        if(r==1 and l==1)cout<<"NO"<<endl;
        else cout<<"YES\n";
    }
    else{
        int odd=0,even=0,len=r-l+1;
        if(l%2==0){
            even=(len+1)/2;
            odd=len-even;
        }
        else{
            odd=(len+1)/2;
            even=len-odd;
        }
        if(k>=odd )cout<<"YES\n";
        else cout<<"NO\n";
    }
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        solve();
    }
}