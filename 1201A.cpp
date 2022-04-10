#include <iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n,m;cin>>n>>m;
	string arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	int marks[m];
	string x="";
	for(int i=0;i<m;i++)cin>>marks[i];
	//cout<<arr[0][0];
	for(int i=0;i<m;i++){
	    unordered_map<char,int> um;
	    int mx=0;
	    char maxx;
	    for(int j=0;j<n;j++){
	        //cout<<arr[j][i];
	        um[arr[j][i]]++;
	        if(um[arr[j][i]]>mx){
	            mx=um[arr[j][i]];
	            maxx=arr[j][i];
	        }
	    }
	    x=x+maxx;
	}
	
	int ans=0;
	for(int i=0;i<m;i++){
	    for(int j=0;j<n;j++){
	        if(arr[j][i]==x[i])ans+=marks[i];
	    }
	}
	cout<<ans<<'\n';
}