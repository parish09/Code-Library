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
	int a,b;cin>>a>>b;
	if(a/2<=b){
	    if(a%2==0){
	        cout<<a-b;
	    }
	    else{
	        if(b==a/2)b++;
	        cout<<a-b;
	    }
	}
	else{
	    if(b==0)b++;
	    cout<<b;
	}
}