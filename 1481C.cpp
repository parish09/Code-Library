#include <iostream>
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define endl '\n'
#define fl(i, l, r) for(int i=(int)(l);i<(int)(r);i++)
#define fld(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)
#define mod 1000000007
using namespace std;
// const int N=1000010;
// int pre[N];
void pre_comp(){
    
}
void solve(){
    int n,m;cin>>n>>m;
    vector<int> v[n+1];
    //for(int i = 0 ;i <=n;i++) v[i].clear();
    int ans[m];
    int a[n];fl(i,0,n)cin>>a[i];
    int b[n];fl(i,0,n){
    	cin>>b[i];
    	if(a[i]!=b[i]){
    		v[b[i]].push_back(i);
    	}
    }
    int c[m];fl(i,0,m)cin>>c[i];
    int last=-1;
    if((int)v[c[m-1]].size()>0){
    	last=v[c[m-1]].back();
    	v[c[m-1]].pop_back();
    }
    else{
    	fl(i,0,n){
    		if(b[i]==c[m-1]){
    			last=i;
    			break;
    		}
    	}
    }
    if(last==-1)cout<<"NO"<<endl;
    else{
    	ans[m-1]=last;
    	fl(i,0,m-1){
    		if((int)v[c[i]].size()==0){
    			ans[i]=last;
    		}
    		else{
    			ans[i]=v[c[i]].back();
    			v[c[i]].pop_back();
    		}
    	}
    	bool flag=true;
    	fl(i,1,n+1){
    		if((int)v[i].size()>0){
    			flag=false;
    			break;
    		}
    	}	
    	if(flag==false)cout<<"NO\n";
    	else{
    		cout<<"YES\n";
    		fl(i,0,m){
    			cout<<ans[i]+1<<" ";
    		}
    		cout<<endl;
    	}
    }
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