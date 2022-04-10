#include <iostream>
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define endl '\n'
#define fl(i, l, r) for(int i=(int)(l);i<(int)(r);i++)
#define fld(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)
using namespace std;
const int N=101;
int pre[N];
void pre_comp(){
	pre[0]=0;
	fl(i,1,N){
		pre[i]=pre[i-1]+i;
		
	}
}
void solve(){
    int n,sum=0;cin>>n;
    int v[n];
    fl(i,0,n){
    	cin>>v[i];
    }
    bool flag=true;
    fl(i,0,n){
    	sum+=v[i];
    	if(sum<pre[i]){
    		flag=false;
    		break;
    	}
    	//cout<<sum<<" "<<pre[i]<<" ";
    }
    if(flag)cout<<"YES\n";
    else cout<<"NO\n";
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