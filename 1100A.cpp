#include <iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n,k;cin>>n>>k;
	int arr[n],sum=0,mx=INT_MIN;
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	    sum+=arr[i];
    }//cout<<sum;
    //mx=abs(sum);//cout<<mx;
	for(int i=0;i<k;i++){
	    int ans=sum;
	    for(int j=i;j<n;j=j+k){
	        ans-=arr[j];
	        //cout<<j;
	    }
	    //cout<<ans; 
	    mx=max(mx,abs(ans));
	}
	cout<<mx<<'\n';
}