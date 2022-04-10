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
    int hc,dc,hm,dm,k,a,h;cin>>hc>>dc>>hm>>dm>>k>>a>>h;	
    // cout<<ceil((double)1/2);	
    // int arr[n];fl(i,0,n)cin>>arr[i];
    for(int i=0;i<=k;i++){
    	int xhc=hc+i*h;1;
    	int xdc=dc+(k-i)*a;
    	if(ceil((double)hm/xdc)<=ceil((double)xhc/dm)){
    		cout<<"YES\n";
    		return;
    	}
    }
    cout<<"NO\n";
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