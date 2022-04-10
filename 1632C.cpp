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
    int n,m;cin>>n>>m;
    // int arr[n];fl(i,0,n)cin>>arr[i];
    int ans=m-n;
    fl(i,n,m+1){
    	int x=0;
    	fld(j,25,0){
    		if(m&(1<<j)){
    			x+=(1<<j);
    		}
    		else if(i&(1<<j)){
    			x+=(1<<j);
    			break;
    		}
    	}
    	ans=min(ans,1+i-n+(i|x)-m);
    }
    cout<<ans<<endl;
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