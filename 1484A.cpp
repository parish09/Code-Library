#include <iostream>
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define endl '\n'
#define fl(i, l, r) for(int i=(int)(l);i<(int)(r);i++)
#define fld(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)
using namespace std;

void solve(){
    int a,b,sum=0;cin>>a>>b;
    while(a>2 and b>2){
        sum+=(a+b)*2-4;
        a=a-2;b=b-2;
    }
    sum+=a*b;
    cout<<sum<<endl;
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        solve();
    }
}