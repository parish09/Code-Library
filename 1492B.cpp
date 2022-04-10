#include <iostream>
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define endl '\n'
#define fl(i, l, r) for(int i=(int)(l);i<(int)(r);i++)
#define fld(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)
#define mod 1000000007
using namespace std;
const int N=100000;
int pre[N];
void pre_comp(){
    
}
void solve(){
    int n;cin>>n;
    int arr[n];fl(i,0,n){
    	cin>>arr[i];
    	if(i==0)pre[i]=arr[i];
    	else{
    		pre[i]=max(pre[i-1],arr[i]);
    	}
    }
    stack<int> stk;
    fld(i,n-1,0){
    	stk.push(arr[i]);
    	if(arr[i]==pre[i]){
    		while(!stk.empty()){
    			cout<<stk.top()<<" ";
    			stk.pop();
    		}
    	}
    }
    while(!stk.empty()){
    	cout<<stk.top()<<" ";
    	stk.pop();
    }
    cout<<endl;
    
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    pre_comp();
    int t;cin>>t;
    while(t--){
        solve();
    }
}