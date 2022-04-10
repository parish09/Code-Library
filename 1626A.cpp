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
    string s;cin>>s;
    unordered_map<char,int> um;
    int n=s.size();
    fl(i,0,n)um[s[i]]++;
    string ans="";
    for(auto &i:um){
        // cout<<i.first;
        if(i.second==2){
            ans+=i.first;
            ans+=i.first;
        }
    }
    for(auto i:um){
        if(i.second==1)ans+=i.first;
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