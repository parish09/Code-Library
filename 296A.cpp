#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;cin>>n;
	int arr[n],freq[1001];
	memset(freq,0,sizeof(freq));
	bool flag=true;
	if(n==1)cout<<"YES";
	else{
	for(int i=0;i<n;i++){
		cin>>arr[i];
		freq[arr[i]]++;
	}
	for(int i=1;i<=1000;i++){
		if(freq[i]>((n+1)/2)){
		//	cout<<freq[i]<<endl;
			flag=false;
			break;
	}
	}
	if(flag==true)cout<<"YES";
	else cout<<"NO";
}}