#include <iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n;cin>>n;
	string team;cin>>team;
	int l=0,r=0;
	while(n--){
	    string x;cin>>x;
	    if(x.substr(0,3)==team)l++;
	    if(x.substr(5,8)==team)r++;
	}
	if(l==r)cout<<"home";
	else cout<<"contest";
}