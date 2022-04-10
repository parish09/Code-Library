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
    int n;cin>>n;
    int arr[n];
    vector<int> v;
    
    bool flag=true;
    fl(i,0,n){
        cin>>arr[i];
        v.push_back(arr[i]);
    }
    if(n==1){
        if(arr[0]==1){
            cout<<"YES\n";
            return;
        }
        else{
            cout<<"NO\n";
            return;
        }
    }
    
    sort(v.begin(),v.end());
    int x=v[n-1],y=v[n-2];
    if(x-y>1){
        flag=false;
    }
    // cout<<x<<" "<<y;
    // fl(i,0,v.size()-1){
    //     if(v[i]==1)continue;
    //     if(v[i+1]-(v[i])>1){
    //         flag=false;
    //         break;
    //     }
    // }
    
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