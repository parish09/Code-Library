#include <iostream>
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define endl '\n'
#define fl(i, l, r) for(int i=(int)(l);i<(int)(r);i++)
#define fld(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)
#define printv(v) for (const auto itr : v){cout<<itr<<' ';}cout<<"\n";
#define mod 1000000007
#define ln length()
#define sz size()
#define line cout<<'\n';

using namespace std;
const int N=0;
int pre[N];
void pre_comp(){
    
}
void solve(){
    int n;cin>>n;
    int sum=0;
    int arr[n];
    unordered_map<double,int> um;
    um.reserve(1024);
	um.max_load_factor(0.25);
    fl(i,0,n){
        cin>>arr[i];
        um[arr[i]]++;
        sum+=arr[i];
    }
    double avg=(double)sum/n;
    // cout<<avg<<" ";
    // vector<int> v;
    int count=0;
    double x=(double)avg*(n-2);
    fl(i,0,n){
    	double a=(double)(sum-arr[i]-x),b=(double)(sum-x-a);
        if(um[a]>0 and um[b]>0){
        	if(a==b){
        		count+=(um[a]*(um[a]-1))/2;
        		um[a]=0,um[b]=0;
        	}
        	else {
        		count+=um[a]*um[b];
        		um[a]=0,um[b]=0;
        	}
        }
    }
    cout<<count<<endl;
    
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    pre_comp();
    int t;
    cin>>t;
    //t=1;
    while(t--){
        solve();
    }
}