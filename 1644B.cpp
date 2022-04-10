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
    deque<int> dq;
    int arr[n+1];
    fld(i,n,1){
    	dq.push_back(i);
    	arr[i]=i;
    }
    swap(arr[2],arr[3]);
    fl(i,1,n+1){
    	cout<<arr[i];
    	if(i!=n)cout<<" ";
    }
    line;
    int x=n;
    while(x!=1){
	    for (auto it = dq.begin(); it != dq.end(); ++it){
	        cout<< *it<<" ";
	    }
	    line;
	    x--;
	    int b=dq.back();
	    dq.pop_back();
	    dq.push_front(b);
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