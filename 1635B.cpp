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
    int arr[n];fl(i,0,n)cin>>arr[i];
    vector<int> pos;
    fl(i,1,n-1){
    	if(arr[i]>arr[i-1] and arr[i]>arr[i+1]){
    		pos.pb(i);
    	}
    }
    int count=0;
    for(int i=0;i<pos.size();){
    	if(i+1<pos.size() and pos[i+1]-pos[i]<=2){
    		count++;
    		arr[pos[i]+1]=max(arr[pos[i]],arr[pos[i]+2]);
    		i=i+2;
    	}
    	else{
    		count++;
    		arr[pos[i]-1]=arr[pos[i]];
    		i++;
    		
    	}
    	
    }
    cout<<count<<endl;
    fl(i,0,n)cout<<arr[i]<<" ";
    line;
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