#include <iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    int p[n],pe=0,po=0;
	    for(int i=0;i<n;i++){
	        cin>>p[i];
	        if(p[i]%2==0)pe++;
	        else po++;
	    }
	    int m;cin>>m;
	    int q[m],qe=0,qo=0;
	    for(int i=0;i<m;i++){
	        cin>>q[i];
	        if(q[i]%2==0)qe++;
	        else qo++;
	    }
        //cout<<0%2<<2%2;
	    cout<<po*qo+pe*qe<<'\n';
	    
	}
}