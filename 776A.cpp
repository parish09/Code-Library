#include <iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	string x,y;cin>>x>>y;
	int n;cin>>n;
	cout<<x<<" "<<y<<'\n';
	while(n--){
	    string mur,temp;cin>>mur>>temp;
	    if(mur==x)x=temp;
	    else y=temp;
	    cout<<x<<" "<<y<<'\n';
	}
}