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
	int arr[n];fl(i,0,n)cin>>arr[i];
	int b[n];fl(i,0,n)cin>>b[i];
	// sort(arr,arr+n);
	// sort(b,b+n);
	int sum=0;
	fl(i,0,n-1){
		int x=abs(arr[i]-arr[i+1])+abs(b[i]-b[i+1]);
		int y=abs(b[i]-arr[i+1])+abs(arr[i]-b[i+1]);
		if(x>y)swap(arr[i],b[i]);
		sum+=min(x,y);
	}
	cout<<sum<<endl;
	
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