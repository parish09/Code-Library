#include <iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int t;cin>>t;
	while(t--){
	    int a,b,n;cin>>a>>b>>n;
	    if(n%3==0)cout<<a<<'\n';
	    if(n%3==1)cout<<b<<'\n';
	    if(n%3==2)cout<<(a^b)<<'\n';
	}
}