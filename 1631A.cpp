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
    int n;cin>>n;int arr[n];fl(i,0,n)cin>>arr[i];
    int b[n];fl(i,0,n)cin>>b[i];
    fl(i,0,n){
    	if(arr[i]>b[i])swap(arr[i],b[i]);
    }
    int mxa=0,mxb=0;
    fl(i,0,n){
    	if(arr[i]>mxa)mxa=arr[i];
    }
    fl(i,0,n){
    	if(b[i]>mxb)mxb=b[i];
    }
    cout<<mxa*mxb<<endl;
    
    
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