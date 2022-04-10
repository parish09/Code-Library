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
    int mn=INT_MAX,mx=INT_MIN;
    int arr[n];
    vector<int> v;
    fl(i,0,n){
    	cin>>arr[i];
    }
    if(arr[n-2]>arr[n-1]){
    	cout<<-1<<endl;
    	return;
    }
    fld(i,n-3,0){
    	int x=min(arr[i+1]-arr[n-1],arr[n-1]-arr[i+1]);
    	if(arr[i]>arr[i+1]){
	    	arr[i]=x;
	    	v.pb(i),v.pb(i+1),v.pb(n-1);
	    }
    }
    bool flag=true;
    fl(i,0,n-1){
    	if(arr[i]>arr[i+1]){
    		flag=false;
    		break;
    	}
    }
    if(!flag){
    	cout<<-1<<endl;
    	return;
    }
    cout<<v.size()/3;
    line;
    for(int i=0;i<v.size();i=i+3){
    	cout<<v[i]+1<<" "<<v[i+1]+1<<" "<<v[i+2]+1;
    	line;
    }
    // line;
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