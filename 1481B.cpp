#include <iostream>
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define endl '\n'
#define fl(i, l, r) for(int i=(int)(l);i<(int)(r);i++)
#define fld(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)
using namespace std;

int solve(){
    int n,k;cin>>n>>k;
    //if(n==1)return -1;
    int arr[n];
    fl(i,0,n)cin>>arr[i];
    int pos=0;
    while(k--){
        fl(i,0,n-1){
            //if(arr[i])
            pos=i;
            if(arr[i]<arr[i+1]){
                arr[i]++;
                break;
            }
            if(i==n-2 and arr[n-1]<=arr[n-2])return -1;
        }
    }
    if(n==1)pos=-2;
    return pos+1;
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        int x=solve();
        cout<<x<<'\n';
    }
}