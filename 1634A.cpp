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
    // int arr[n];fl(i,0,n)cin>>arr[i];
    string s;cin>>s;
    bool same=true,palin=true;
    // fl(i,0,n-1){
    // 	if(s[i]!=s[i+1]){
    // 		same=false;
    // 		break;
    // 	}
    // }
    int l=0,r=n-1;
    while(l<r){
    	if(s[l]!=s[r]){
    		palin=false;
    		break;
    	}
    	l++,r--;
    }
    if(k==0 or palin==true)cout<<1<<endl;
    else cout<<2<<endl;
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