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
    int n;cin>>n;
    
    int ans=0;
    int arr[n];
    fl(i,0,n){
    	cin>>arr[i];
    	ans=ans|arr[i];
    }
    int x=0;
    // while(n--){
    // 	ans+=pow(2,x);
    // 	x++;
    // }
    cout<<ans<<endl;
    
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