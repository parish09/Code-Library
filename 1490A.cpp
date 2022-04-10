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
    int c=0;
    fl(i,0,n-1){
    	int mx=max(arr[i],arr[i+1]);
    	int mn=min(arr[i],arr[i+1]);
    	while(mn<((mx+1)/2)){
    		mn=mn*2;
    		c++;
    	}
    }
    cout<<c<<endl;
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