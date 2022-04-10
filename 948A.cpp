#include <iostream>
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define endl '\n'
using namespace std;
#define fl(i, l, r) for(int i=(int)(l);i<(int)(r);i++)
#define fld(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n,m;cin>>n>>m;
	char arr[n][m];
	bool flag=true;
	fl(i,0,n){
	    fl(j,0,m){
	        cin>>arr[i][j];
	        if(arr[i][j]=='.')arr[i][j]='D';
	    }
	}
	fl(i,0,n){
	    fl(j,0,m){
	        if(flag==false)break;
	        if(arr[i][j]=='S'){
	            //cout<<i<<j<<endl;
	            if(i-1>=0 and arr[i-1][j]=='W' )flag=false;
	            if(i+1<n and arr[i+1][j]=='W' )flag=false;
	            if(j-1>=0 and arr[i][j-1]=='W' )flag=false;
	            if(j+1<m and arr[i][j+1]=='W' )flag=false;
	            //if(arr[i-1][j]=='.')arr[i-1][j]='D';
	        }
	    }
	}
	if(flag==false)cout<<"NO"<<endl;
	else{
	    cout<<"YES\n";
	    fl(i,0,n){
	        fl(j,0,m){
	            cout<<arr[i][j];
	        }
	        cout<<endl;
	    }
	}
}