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
    unordered_map<int,int> um;
    int arr[n+1];
    fl(i,1,n+1){
        cin>>arr[i];
        um[arr[i]]=i;
    }
    int count=1,e=um[n],mini[n+1],mn=arr[n];
    mini[n]=arr[n];
    fld(i,n-1,1){
        if(arr[i]<mn){
            mini[i]=arr[i];
            mn=arr[i];
        }
        else mini[i]=mn;
    }
    fld(i,n-1,1){
        if(um[i]<e){
                if(mini[e]>i)count++;
                e=um[i];
        }
    }
    cout<<count<<endl;
    
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