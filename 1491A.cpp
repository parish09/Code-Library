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
    int n,q;cin>>n>>q;
    int zero=0,one=0;
    vector<int> arr(n);fl(i,0,n){
    	cin>>arr[i];
    	if(arr[i]==0)zero++;
    	else one++;
    }
    while(q--){
    	int a,b;cin>>a>>b;
    	if(a==1){
    		if(arr[b-1]==1){
    			one--;
    			zero++;
    		}
    		if(arr[b-1]==0){
    			one++;
    			zero--;
    		}
    		arr[b-1]=1-arr[b-1];
    	}
    	if(a==2){
    		if(b<=one)cout<<1<<endl;
    		else cout<<0<<endl;
    	}
    }
    
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    pre_comp();
    int t;//cin>>t;
    t=1;
    while(t--){
        solve();
    }
}