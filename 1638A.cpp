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
	    int arr[n+1];fl(i,1,n+1)cin>>arr[i];
	    int mx=-1,ind=INT_MAX,mn;
	    fl(i,1,n+1){
	    	// cout<<arr[i]<<" ";
	    	// cout<<i<<arr[i]<<endl;
	    	if(arr[i]!=i){
	    			mx=arr[i];
	    			ind=i;
	    			break;
	    		}
	    	
	    }
	    int count=0,rev=INT_MAX;
	    fl(i,1,n+1){
	    	if(arr[i]==ind){
	    		rev=i;
	    		break;
	    	}
	    }
	    while(ind<rev){
	    	swap(arr[ind],arr[rev]);
	    	ind++;
	    	rev--;
	    }
	    
	    // cout<<rev<<" "<<ind<<endl;
	    fl(i,1,n+1)cout<<arr[i]<<" ";
	    line;
	    
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