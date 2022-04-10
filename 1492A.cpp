#include <iostream>
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define endl '\n'
#define fl(i, l, r) for(int i=(int)(l);i<(int)(r);i++)
#define fld(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)
#define mod 1000000007
using namespace std;
const int N=1;
int pre[N];
void pre_comp(){
    
}
void solve(){
    int p,a,b,c;cin>>p>>a>>b>>c;
    // int arr[n];fl(i,0,n)cin>>arr[i];
    int x=p/a,y=p/b,z=p/c;
    x=p-x*a,y=p-y*b,z=p-z*c;
    if(x==0 or y==0 or z==0)cout<<0<<endl;
    else 
    cout<<min(a-x,min(b-y,c-z))<<endl;
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    pre_comp();
    int t;cin>>t;
    while(t--){
        solve();
    }
}