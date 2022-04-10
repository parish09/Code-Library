#include <iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	string x;cin>>x;
	int s=x.size();
	int a[s],b[s],c[s];
	for(int i=1;i<s-1;i++){
	    if(x[i]=='A'){
	        a[i-1]=1;
	        a[i]=1;
	        a[i+1]=1;
	    }
	    else if(x[i]=='B'){
	        b[i-1]=1;
	        b[i]=1;
	        b[i+1]=1;
	    }
	    else if(x[i]=='C'){
	        c[i-1]=1;
	        c[i]=1;
	        c[i+1]=1;
	    }
	}
	int n=s;
	if(x[0]=='A'){
	    a[0]=1;
	    a[1]=1;
	}
	else if(x[0]=='B'){
	    b[0]=1;
	    b[1]=1;
	}
	else if(x[0]=='C'){
	    c[0]=1;
	    c[1]=1;
	}
	if(x[n-1]=='A'){
	    a[n-1]=1;
	    a[n-2]=1;
	}
	else if(x[n-1]=='B'){
	    b[n-1]=1;
	    b[n-2]=1;
	}
	else if(x[n-1]=='C'){
	    c[n-1]=1;
	    c[n-2]=1;
	}
	bool flag=false;
	for(int i=0;i<s;i++){
	    if(a[i]==1 and b[i]==1 and c[i]==1){
	        flag=true;
	        break;
	    }
	}
	if(flag)cout<<"YES";
	else cout<<"NO";
}