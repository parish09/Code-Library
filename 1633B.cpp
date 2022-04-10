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
    // int n;cin>>n;
    // int arr[n];fl(i,0,n)cin>>arr[i];
    string s;cin>>s;
    int one=0,zer=0;
    fl(i,0,s.size()){
    	if(s[i]=='1')one++;
    	else zer++;
    }
    if(one>zer)cout<<zer<<endl;
    else if(one<zer)cout<<one<<endl;
    else cout<<one-1<<endl;
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