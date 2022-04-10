#include <iostream>
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define endl '\n'
#define fl(i, l, r) for(int i=(int)(l);i<(int)(r);i++)
#define fld(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)
#define printv(v) for (const auto itr : v){cout<<itr<<' ';}
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
    int n,a,b;cin>>n>>a>>b;
    // int arr[n];fl(i,0,n)cin>>arr[i];
    int s=1,e=n;
    vector<int> ans;
    if(a+b>n-2 || abs(a-b)>1)cout<<-1<<endl;
    else{
    	if(a>b){
    		while(a--){
    			ans.pb(e),ans.pb(s);
    			s++;e--;
    		}
    		fl(i,s,e+1)cout<<i<<" ";
    		printv(ans);
    		line;
    	}
    	else if(a<b){
    		while(b--){
    			ans.pb(e),ans.pb(s);
    			s++;e--;
    		}
    		printv(ans);
    		fl(i,s,e+1)cout<<i<<" ";
    		line;
    	}
    	else{
    		while(b--){
    			ans.pb(e),ans.pb(s);
    			s++;e--;
    		}
    		cout<<s<<" ";
    		s++;
    		printv(ans);
    		fl(i,s,e+1)cout<<i<<" ";
    		line;
    	}
    }
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