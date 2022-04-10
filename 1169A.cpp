#include <iostream>
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define endl '\n'
#define fl(i, l, r) for(int i=(int)(l);i<(int)(r);i++)
#define fld(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)
using namespace std;

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n,a,b,x,y;cin>>n>>a>>b>>x>>y;
	bool flag=false;
	while(1){
	    if(a==x){
	        flag=true;
	        break;
	    }
	    if(a==b)break;
	    if(x==y)break;
	    a++;
	    x--;
	    if(a==n+1)a=1;
	    if(x==0)x=n;
	}
	if(flag==true)cout<<"YES";
	else cout<<"NO";
	
}