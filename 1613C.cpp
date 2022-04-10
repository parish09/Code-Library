#include <iostream>
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define endl '\n'
#define fl(i, l, r) for(int i=(int)(l);i<(int)(r);i++)
#define fld(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)
#define printv(v) for (const auto itr : v){cout<<itr<<' ';}cout<<"\n";
#define mod 1000000007
#define ln length()
#define sz size()
#define line cout<<'\n';

using namespace std;
const int N=0;
int pre[N];
void pre_comp(){
    
}
void solve(){
    int n,m;cin>>n>>m;
    int arr[n];fl(i,0,n)cin>>arr[i];
    int l=1,r=m;
    int mn=m;
    while(l<=r){
    	// cout<<1;
    	int mid=(l+r)/2;
    	 // cout<<mid<<" ";
    	int sum=0;
    	fl(i,1,n){
    		sum+=min(mid,arr[i]-arr[i-1]);
    	}
    	sum+=mid;
    	// cout<<sum<<endl;
    	if(sum>=m){
    		r=mid-1;
    		mn=mid;
    	}
    	else{
    		l=mid+1;
    	}
    }
    cout<<mn<<endl;
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    pre_comp();
    int t;
    cin>>t;
    //t=1;
    while(t--){
        solve();
    }
}