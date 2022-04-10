#include <iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[3],d;
	cin>>arr[0]>>arr[1]>>arr[2]>>d;
	sort(arr,arr+3);
	int x=abs(arr[1]-arr[0]);
	int cnt=0;
	if(d-x>0)cnt+=d-x;
	x=abs(arr[1]-arr[2]);
	if(d-x>0)cnt+=d-x;
	cout<<cnt;
	
}