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
    int n,e,z;cin>>n;
    if(n>36)cout<<-1;
    else if(n==0)cout<<1;
    else{
        e=n/2;
        z=n%2;
        while(e--)cout<<8;
        while(z--)cout<<4;
    }
	
	
}