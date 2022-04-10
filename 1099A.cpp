#include <iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int w,h,w1,h1,w2,h2;cin>>w>>h>>w1>>h1>>w2>>h2;
	for(int i=h;i>=0;i--){
	    w=w+i;
	    if(i==h1)w=w-w1;
	    if(w<0)w=0;
	    if(i==h2)w-=w2;
	    if(w<0)w=0;
	    
	}
	cout<<w;
}