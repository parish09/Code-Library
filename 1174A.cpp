#include <iostream>
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define endl '\n'
using namespace std;
#define fl(i, l, r) for(int i=(int)(l);i<(int)(r);i++)
#define fld(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n;cin>>n;
	n=n*2;
	int arr[n];
	fl(i,0,n)cin>>arr[i];
	sort(arr,arr+n);
	//swap(arr[0],arr[n-1]);
	int sum1=0,sum2=0;
	fl(i,0,n/2)sum1+=arr[i];
	fl(i,n/2,n)sum2+=arr[i];
	//cout<<sum1<<sum2;
	if(sum1==sum2)cout<<-1;
	else{
	    fl(i,0,n)cout<<arr[i]<<" ";
	}
}