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
    int arr[n];
    unordered_map<int,int> um;
    vector<int> v1,v2;
    fl(i,0,n){
        cin>>arr[i];
        um[arr[i]]++;
    }
    sort(arr,arr+n);
    int mn=INT_MAX,a,b;
    fl(i,0,n-1){
        // cout<<arr[i+1]<<" "<<arr[i];
        // line;
        if((arr[i+1]-arr[i])<mn){
            mn=arr[i+1]-arr[i];
            a=arr[i+1];
            b=arr[i];
        }
    }
    um[a]--,um[b]--;
    v1.pb(a);
    v2.pb(b);
    // cout<<a<<b;
    // for(auto i:um){
    //     if(i.first>=a and i.second>0){
    //         i.second--;
    //         v1.pb(i.first);
    //     }
    //     if(i.first<=b and i.second>0){
    //         i.second--;
    //         v2.pb(i.first);
    //     }
    // }
    fl(i,0,n){
        // cout<<arr[i]<<" ";
        if(arr[i]>=a and um[arr[i]]>0){
            um[arr[i]]--;
            v1.pb(arr[i]);
        }
        if(arr[i]<=b and um[arr[i]]>0){
            um[arr[i]]--;
            v2.pb(arr[i]);
        }
    }
    if(n==2){
        cout<<arr[0]<<" "<<arr[1]<<endl;
        return;
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    fl(i,0,v1.size())cout<<v1[i]<<" ";
    fl(i,0,v2.size())cout<<v2[i]<<" ";
    // cout<<a<<b;
    line;
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