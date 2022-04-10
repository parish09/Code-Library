#include <iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n,m,k;cin>>n>>m>>k;
	int arr[n];
	for(int i=1;i<=n;i++)cin>>arr[i];
	int index=m+1,l=INT_MAX,r=INT_MAX;//cout<<index<<'\n';
	while(index<=n){
	    if(arr[index]!=0 and arr[index]<=k){
	        r=index;
	        //cout<<r;
	        break;
	    }
	    index++;
	}
	index=m-1;
	while(index>=1){
	    if(arr[index]!=0 and arr[index]<=k){
	        l=index;
	        //cout<<l;
	        break;
	    }
	    index--;
	}
	//cout<<l<<" "<<r;
	cout<<min(abs(m-l),abs(r-m))*10;
}