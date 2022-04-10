#include <iostream>
#include<bits/stdc++.h>
#define int unsigned long long
#define pb push_back
#define endl '\n'
#define fl(i, l, r) for(int i=(int)(l);i<(int)(r);i++)
#define fld(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)
#define mod 1000000007
using namespace std;
const int N=1;
int pre[N];
unordered_map<int,int> pre_um;
void pre_comp(){
    fl(i,0,N)pre_um[i*i*i]++;
}
void solve(){
    int n;cin>>n;//int arr[n];fl(i,0,n)cin>>arr[i];
    // cout<<pre_um[7000]<<endl;
    bool flag=false;
    int x=ceil(cbrt(n));
    //cout<<x;
    fl(i,0,x+1){
        fl(j,i,x+1){
            if(i*i*i+j*j*j==n)flag=true;
        }
    }
    if(n==1)flag=false;
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO\n";
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //pre_comp();
    int t;cin>>t;
    while(t--){
        solve();
    }
}