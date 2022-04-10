#include <iostream>
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define endl '\n'
#define fl(i, l, r) for(int i=(int)(l);i<(int)(r);i++)
#define fld(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)
using namespace std;

void solve(){
    int n,m=1;cin>>n;
    int arr[n];
    bool arb_lrg=true;
    bool impsbl=false;
    fl(i,0,n)cin>>arr[i];
    int x=arr[1]-arr[0];
    fl(i,0,n-1)if(arr[i]>arr[i+1])arb_lrg=false;
    fl(i,0,n-1){
            if(arr[i]<=arr[i+1] and arr[i+1]-arr[i]!=x)arb_lrg=false;
        }
    if(arb_lrg==true)cout<<0<<endl;
    else{
        int c=arr[1]-arr[0];
        fl(i,0,n-1){
            if(arr[i]<=arr[i+1] and arr[i+1]-arr[i]!=c)impsbl=true;
        }
        if(impsbl==true)cout<<-1<<endl;
        else{
            fl(i,0,n-1){
                if(arr[i]>arr[i+1]){
                    m=max(m,arr[i]+c-arr[i+1]);
                }
            }
            cout<<m<<" "<<c<<endl;
        }
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