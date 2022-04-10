#include <iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n;cin>>n;
	string x;cin>>x;
	unordered_map<char,int> um;
	for(auto i:x){
	    um[i]++;
	}
    string ans="";
    while(um['n']--){
        ans+="1 ";
    }
    while(um['z']--){
        ans+="0 ";
    }
    cout<<ans<<'\n';
	
}