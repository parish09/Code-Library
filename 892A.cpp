#include <iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n;cin>>n;
	int vol[n],rem[n],sum=0;
	for(int i=0;i<n;i++)cin>>rem[i],sum+=rem[i];
	for(int i=0;i<n;i++)cin>>vol[i];
	sort(vol,vol+n);
	int max_cap=vol[n-1]+vol[n-2];
	//cout<<max_cap<<" "<<sum;
	if(max_cap>=sum)cout<<"YES\n";
	else cout<<"NO\n";
}