#include <iostream>
#include <unordered_map>
#include <string>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
typedef long long ll;
using namespace std;

int main(){
fast;tie;
    int n;cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++)cin>>arr[i];
    int m;cin>>m;
    for(int i=1;i<=m;i++){
    	int x,y,l,r;cin>>x>>y;
    	l=y-1;
    	r=arr[x]-y;//	cout<<l<<r<<endl;
    	arr[x]=0;
    	if(x==1)arr[x+1]+=r;
    	else if(x==n)arr[x-1]+=l;
    	else{
    		arr[x+1]+=r;
    		arr[x-1]+=l;
    	}
    }
    for(int i=1;i<=n;i++)cout<<arr[i]<<endl;
}