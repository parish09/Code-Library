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
    int arr[n],temp[n];
    vector<int> even,odd;
    fl(i,0,n){
	    	cin>>arr[i];
	    	temp[i]=arr[i];
	    	if(arr[i]%2==0)even.pb(arr[i]);
	    	else odd.pb(arr[i]);
	    }
	    bool flag=true;
	     int x=even.size(),y=odd.size();
	    // cout<<x<<y<<endl;
	    for(int i=0;i<x-1;i++){
	    	if(even[i]>even[i+1]){
	    		flag=false;
	    		break;
	    	}
	    }
	    for(int i=0;i<y-1;i++){
	    	if(odd[i]>odd[i+1]){
	    		flag=false;
	    		break;
	    	}
	    }
	    if(flag)cout<<"YES\n";
	    else cout<<"NO\n";
    // 	}
    // 	sort(temp,temp+n);
    // fl(i,0,n-1){
    // 	if(arr[i]>arr[i+1] and ((arr[i]+arr[i+1])%2==1)){
    // 		swap(arr[i],arr[i+1]);
    // 	}
    // }
    // bool flag=true;
    // fl(i,0,n){
    // 	// cout<<arr[i]<<" "<<temp[i]<<endl;
    // 	if(arr[i]!=temp[i]){
    // 		flag=false;
    // 	}
    // }
    // if(flag)cout<<"YES\n";
    // else cout<<"NO\n";
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