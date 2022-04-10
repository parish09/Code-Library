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
    int n;cin>>n;
    vector<int> v[n+1];
    int arr[n];fl(i,0,n){
    	cin>>arr[i];
    	v[arr[i]].pb(i);
    }
    vector<int> ans;
    int l=0;
    while(l<n){
    	int mex=0;
    	int r=l;
    	for(;mex<=n;mex++){
    		auto it=lower_bound(v[mex].begin(),v[mex].end(),l);
    		if(it==v[mex].end())break;
    		r=max(r,*it);
    	}
    	ans.pb(mex);
    	l=r+1;
    }
    cout<<ans.size()<<endl;
    for(auto i:ans)cout<<i<<" ";
    	cout<<endl;
    
    
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