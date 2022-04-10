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
    int n;cin>>n;//int arr[n];fl(i,0,n)cin>>arr[i];
    string s;cin>>s;
    int zero=0,one=0;
    fl(i,0,n){
    	if(s[i]=='0')zero++;
    	else one++;
    }
    if(n==1)cout<<"YES"<<endl;
    else if(n==2){
    	
    	if(one==n or zero==n)cout<<"NO"<<endl;
    	else cout<<"YES"<<endl;
    }
    else{
    	cout<<"NO"<<endl;
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