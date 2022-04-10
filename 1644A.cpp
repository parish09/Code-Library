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
    // int n;cin>>n;
    // int arr[n];fl(i,0,n)cin>>arr[i];
    string s;cin>>s;
    int r=0,b=0,g=0;
    bool flag=true;
    fl(i,0,s.size()){
    	if(s[i]=='r')r=1;
    	if(s[i]=='g')g=1;
    	if(s[i]=='b')b=1;
    	if(s[i]=='R'){
    		if(r==0){
    			flag=false;
    			break;
    		}
    	}
    	if(s[i]=='G'){
    		if(g==0){
    			flag=false;
    			break;
    		}
    	}
    	if(s[i]=='B'){
    		if(b==0){
    			flag=false;
    			break;
    		}
    	}
    	
    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
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