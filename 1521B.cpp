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
bool cmp(pair<int,int> a,pair<int,int> b){
    if(a.first<b.first)return true;
    return false;
}
void solve(){
    int n;cin>>n;
    vector<pair<int,int>> v;
    fl(i,0,n){
        int x;cin>>x;
        v.pb(make_pair(x,i+1));
    }
    sort(v.begin(),v.end(),cmp);
    // fl(i,0,n)cout<<v[i].first;
    int k=0;
    cout<<n-1<<endl;
    vector<int> ans[n];
    fl(i,0,n-1){
        cout<<v[i].second<<" "<<v[i+1].second<<" "<<v[i].first<<" "<<v[i].first+1<<endl;
        v[i+1].first=v[i].first+1;
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