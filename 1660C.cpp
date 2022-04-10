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
    // int n;cin>>n
    string s;cin>>s;
    int n=s.size();
    unordered_map<char,int> um;
    vector<stack<int>> v(26),v2(26);
    fld(i,n-1,0){
        int x=s[i]-'a';
        v[x].push(i);
    }
    v2=v;
    int count=0,ans=0;
    // for(int i=0;i<n;i++){
    //     int x=s[i]-'a';
    //     if(v[x].empty())continue;
    //     else{
    //         while(!v[x].empty()){
    //             cout<<v[x].top();
    //             v[x].pop();
    //         }
    //         cout<<endl;
    //     }
    // }
    for(int j=0;j<n;j++){
        v=v2;
        ans=max(count,ans);
        count=0;
        for(int i=j;i<n;){
            int x=s[i]-'a';
            // cout<<x<<" ";
            if(v[x].size()==1){
                i++;
            }
            else if(v[x].empty())i++;
            else{
                while(v[x].top()!=i){
                    if(v[x].empty())break;
                    v[x].pop();
                }
                if(v[x].size()==1)i++;
                else if(v[x].empty())i++;
                else{
                    count+=2;
                    // cout<<v[x].top();
                    v[x].pop();
                    int z=v[x].top();
                    i=z+1;
                    // cout<<z<<" "<<i<<endl;
                    v[x].pop();
                }
            }
            
            
        }
    }
    int c1=0;
    for(int i=0;i<n;){
        if(s[i]==s[i+1]){
            c1+=2;
            i+=2;
        }
        else i++;
    
    }
    // if(count!=0)c1=count;
    cout<<n-ans<<endl;
    
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