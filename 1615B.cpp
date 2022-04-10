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
const int N=2e5+10;
int pre[N][18];
void pre_comp(){
    memset(pre,0,sizeof(pre));
    for(int i=1;i<N;i++){
        for(int j=0;j<18;j++){
            if(i&(1<<j))pre[i][j]=1+pre[i-1][j];
            else pre[i][j]=pre[i-1][j];
        }
    }
}
void solve(){
    int n,m;cin>>n>>m;
    int ans=INT_MIN;
    fl(i,0,18){
        int x=pre[m][i]-pre[n-1][i];
        ans=max(ans,x);
    }
    cout<<m-n+1-ans<<endl;
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