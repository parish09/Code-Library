#include <iostream>
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define endl '\n'
#define fl(i, l, r) for(int i=(int)(l);i<(int)(r);i++)
#define fld(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)
#define mod 1000000007
using namespace std;
const int N=1;
int pre[N];
void pre_comp(){
    
}
void solve(){
    //int n;cin>>n;int arr[n];fl(i,0,n)cin>>arr[i];
    int n;cin>>n;
    int a[n],b[n];
    fl(i,0,n){
    	cin>>a[i];
    	cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    int x,y;
    if(n%2==0){
    	x=a[n/2]-a[-1+n/2]+1;
    	y=b[n/2]-b[-1+n/2]+1;
    }
    else{
    	x=1;
    	y=1;
    }
    cout<<x*y<<endl;
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