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
    pair<int,int> arr[n];
    fl(i,0,n){
        cin>>arr[i].first;
        arr[i].second=i+1;
    }
    int count=0;
    sort(arr,arr+n);
    fl(i,0,n){
        fl(j,i+1,n){
            int a=arr[i].first*arr[j].first;
            int b=arr[i].second+arr[j].second;
            if(a==b)count++;
            if(a>2*n)break;
        }
    }
    cout<<count<<endl;
    
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