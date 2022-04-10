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
    int n,a,b,c;cin>>n>>a>>b>>c;
    if(n==1)cout<<0;
    if(n==2)cout<<min(a,b);
    if(n>2)cout<<min(a,b)+(n-2)*min(a,min(b,c));
	
	
}