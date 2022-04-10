#include <iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n,v;cin>>n>>v;
	int x=n-v;
	if(v>=n-1)cout<<n-1;
	else{
	    cout<<v-1+(x*(x+1))/2;
	}
}