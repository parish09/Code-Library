#include <iostream>
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define endl '\n'
#define line cout<<'\n'
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
    unordered_map<int,int> um;
    int arr[n];
    fl(i,0,n){
        cin>>arr[i];
        um[arr[i]-i]++;
    }
    int ans=0;
    for(auto i:um){
        if(i.second>1){
            ans+=((i.second)*(i.second-1))/2;
        }
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