#include <iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int t;cin>>t;
	while(t--){
	    int n,m;cin>>n>>m;
	    vector<int> ans;
	    for(int i=1;i<=n;i++){
	        int a,b,c,d;
	        for(int j=1;j<=m;j++){
	            a=abs(i-1)+abs(j-1);
	            b=abs(i-n)+abs(j-1);
	            c=abs(i-1)+abs(j-m);
	            d=abs(i-n)+abs(j-m);
	            ans.push_back(max(a,max(b,max(c,d))));
	        }
	    }
	    sort(ans.begin(),ans.end());
	    for(int i=0;i<n*m;i++)cout<<ans[i]<<" ";
	    cout<<'\n';
	}
}