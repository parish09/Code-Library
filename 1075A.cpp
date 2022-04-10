#include <iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n,x,y;cin>>n>>x>>y;
	
	int min1=max(abs(1-x),abs(1-y));
	int min2=max(abs(n-x),abs(n-y));
	if(min1>min2)cout<<"Black";
	else cout<<"White";
}