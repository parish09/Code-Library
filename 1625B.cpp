#include <iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    int arr[n],z=-1;
	    unordered_map<int,vector<int>> um;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        um[arr[i]].push_back(i);
	    }
	    for(auto k:um){
	        if(k.second.size()>1){
	            //int x=k.first;
	            //vector<int> v;
	            //for(int i=0;i<n;i++)if(arr[i]==x)v.push_back(i);
	            int ans=INT_MIN;
	            int s=k.second.size(),e=k.second.size();
	            /*if(v.size()>3){
    	            int s=-1+v.size()/2;
	            }*/
	            /*for(int i=0;i<s;i++){
	                for(int j=i+1;j<e;j++){
	                    ans=max(ans,v[i]+(n-1-v[j])+1);
	                }
	            }*/
	            for(int i=0;i<s-1;i++){
	                ans=max(ans,k.second[i]+n-k.second[i+1]);
	            }
	            z=max(z,ans);
	        }
	    }
	    cout<<z<<'\n';
	}
}