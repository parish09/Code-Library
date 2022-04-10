#include <iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int t;cin>>t;
	while(t--){
	    int n,m,r,c;cin>>n>>m>>r>>c;
	    char arr[n+1][m+1];
	    bool flag=true;
	    for(int i=1;i<=n;i++){
	        for(int j=1;j<=m;j++){
	            cin>>arr[i][j];
	            if(arr[i][j]=='B')flag=false;
	        }
	    }
	    if(flag==true)cout<<-1<<'\n';
	    else{
	        bool zero=false;
	        if(arr[r][c]=='B')zero=true;
	        bool one=false;
	        for(int i=1;i<=m;i++){
	            if(arr[r][i]=='B')one=true;
	        }
	        for(int i=1;i<=n;i++){
	            if(arr[i][c]=='B')one=true;
	        }
	        if(zero)cout<<0<<'\n';
	        else if(one)cout<<1<<'\n';
	        else cout<<2<<'\n';
	    }
	}
}