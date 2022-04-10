#include <iostream>
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define endl '\n'
#define line cout<<'\n'
#define fl(i, l, r) for(int i=(int)(l);i<(int)(r);i++)
#define fld(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)
#define mod 1000000007
using namespace std;
const int N=0;
int pre[N];
void pre_comp(){
    
}
void solve(){
	int n;cin>>n;
	string s=to_string(n);
	// int arr[n];fl(i,0,n)cin>>arr[i];
	// cout<<s.size();
	string x="";
	int sz=s.size();
	while(sz>0){
		x+='1';
		sz--;
	}
	int div=stoi(x);
	// cout<<div;
	bool flag=false;
	while(div>1){
		string a=to_string(div);
		string b=to_string(n);
		// cout<<b.size()<<" "<<a<<endl;
		if(b.size()>a.size()){
			flag=false;
			break;
		}
		n=n%div;
		if(n==0){
			flag=true;
			break;
		}
		div=div/10;
	}
	if(flag)cout<<"YES\n";
	else cout<<"NO\n";
	
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