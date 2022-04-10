#include <iostream>
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define endl '\n'
#define fl(i, l, r) for(int i=(int)(l);i<(int)(r);i++)
#define fld(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)
#define mod 1000000007
using namespace std;
const int N=0;
int pre[N];
void pre_comp(){
    
}
void solve(){
    int n,k;cin>>n>>k;
     int arr[n];fl(i,0,n)arr[i]=i;
     if(k==n-1)cout<<"-1\n";
     else{
        // int x=n-1-k;
        arr[k]=0;
        arr[0]=k;
        // fl(i,0,n)cout<<arr[i]<<" ";
        // cout<<endl;
        int ans=0;
        vector<pair<int,int>> v;
        int l=0,r=n-1;
        while(l<r){
            cout<<arr[l]<<" "<<arr[r]<<endl;
            ans+=arr[l]&arr[r];
            l++,r--;
        }
        // cout<<ans<<endl;
     }
    
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